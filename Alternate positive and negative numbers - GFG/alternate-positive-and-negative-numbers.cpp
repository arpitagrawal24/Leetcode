//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> ne,po;
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] < 0)
	        ne.push_back(arr[i]);
	        else
	        po.push_back(arr[i]);
	    }
	    int i = 0,j = 0,k = 0;
	    while(i<po.size() && j<ne.size())
	    {
	        arr[k++] = po[i++];
	        arr[k++] = ne[j++];
	    }
	    while(i < po.size())
	    {
	        arr[k++] = po[i++];
	    }
	    while(j < ne.size())
	    {
	        arr[k++] = ne[j++];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends