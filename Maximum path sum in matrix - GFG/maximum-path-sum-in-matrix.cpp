//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        
        int ans = INT_MIN;
        
        vector<vector<int>> dp(N,vector<int>(N,0));
        
        for(int j = 0 ; j < N; j++)
        {
            dp[0][j] = Matrix[0][j];
        }
        
        for(int i = 1; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                int up = dp[i-1][j], ld = -1e4, rd = -1e4;
                
                if(j > 0) ld = dp[i-1][j-1];
                if(j < N-1) rd = dp[i-1][j+1];
                
                dp[i][j] = max({up,ld,rd}) + Matrix[i][j];
            }
        }
        
        for(int j = 0; j < N; j++)
        {
            ans = max(ans , dp[N-1][j]);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends