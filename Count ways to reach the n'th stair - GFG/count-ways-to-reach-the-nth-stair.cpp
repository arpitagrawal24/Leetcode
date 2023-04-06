//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int mod = 1e9+7;
    int countWays(int n)
    {
        // your code for dp with space optimization
        int pre1 = 1;
        int pre2 = 1;
        for(int i = 2; i < n+1; i++)
        {
            int cur = (pre1%mod + pre2%mod)%mod;
            pre2 = pre1;
            pre1 = cur; 
        }
        return pre1;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends