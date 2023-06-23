//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  int fn(int i , int j1,int j2, vector<vector<int>> & grid, vector<vector<vector<int>>> & dp)
  {
      int n = grid.size(), m = grid[0].size();
      
      if(j1 < 0||j1 >= m||j2 < 0||j2 >= m) return -1e3;
      
      if(i == n-1)
      {
          if(j1 == j2 ) return grid[i][j1];
          else return grid[i][j1] + grid[i][j2];
      }
      int ans = -1e3;
      
      for(int d1 = -1; d1 <= 1; d1++)
      {
          for(int d2 = -1; d2 <= 1; d2++)
          {
              int val;
              if(j1 == j2 ) 
                val = fn(i+1, j1+d1, j2+d2, grid, dp) + grid[i][j1];
              else
                val = fn(i+1, j1+d1, j2+d2, grid, dp) + grid[i][j1] + grid[i][j2];
                
              ans = max(ans,val);
          }
      }
      return dp[i][j1][j2] = ans;
  }
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,0)));
        
        for(int j1 = 0; j1 < m; j1++)
        {
            for(int j2 =0 ; j2 < m; j2++)
            {
                if(j1 == j2 ) 
                    dp[n-1][j1][j2] = grid[n-1][j1];
                else 
                    dp[n-1][j1][j2] = grid[n-1][j1] + grid[n-1][j2];
            }
        }
        
        for(int i = n-2; i >= 0; i--)
        {
            for(int j1 = 0; j1 < m; j1++)
            {
                for(int j2 =0 ; j2 < m; j2++)
                {
                    int maxi = INT_MIN;

                                                             //Inner nested loops to try out 9 options
                    for (int di = -1; di <= 1; di++) 
                    {
                      for (int dj = -1; dj <= 1; dj++) 
                      {
            
                        int ans;
            
                        if (j1 == j2)
                          ans = grid[i][j1];
                        else
                          ans = grid[i][j1] + grid[i][j2];
            
                        if ((j1 + di < 0 || j1 + di >= m) || (j2 + dj < 0 || j2 + dj >= m))
                          ans += -1e9;
                        else
                          ans += dp[i + 1][j1 + di][j2 + dj];
            
                        maxi = max(ans, maxi);
                      }
                    }
                    dp[i][j1][j2] = maxi;
                }
            }
        }
        
        return dp[0][0][m-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends