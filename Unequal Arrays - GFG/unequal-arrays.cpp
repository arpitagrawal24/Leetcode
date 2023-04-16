//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
         vector<int>even1,odd1,even2,odd2;
       for(int i=0;i<N;i++) {
           if(A[i]%2==0) even1.push_back(A[i]);
           else odd1.push_back(A[i]);
           if(B[i]%2==0) even2.push_back(B[i]);
           else odd2.push_back(B[i]);
         }
       if(even1.size()!=even2.size())
       return -1;
       sort(even1.begin(),even1.end());
       sort(odd1.begin(),odd1.end());
       sort(even2.begin(),even2.end());
       sort(odd2.begin(),odd2.end());
       long long diff=0,podiff=0;
       for(int i=0;i<even1.size();i++){
           diff+=even1[i]-even2[i];
           podiff+=abs(even1[i]-even2[i]);
        }
        for(int i=0;i<odd1.size();i++){
           diff+=odd1[i]-odd2[i];
           podiff+=abs(odd1[i]-odd2[i]);
        }
       if(diff!=0)
       return -1;
       else return podiff/4;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends