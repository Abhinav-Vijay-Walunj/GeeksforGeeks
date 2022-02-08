// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int nCr(int n, int r){
        if(n<r)
        {
            return 0;
        }
        if((n-r)<r)
        {
            r=n-r;
        }
        //int mod=10e+7;
        int C[r + 1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; // nC0 is 1
 
    for (int i = 1; i <= n; i++)
    {
       
        // Compute next row of pascal triangle using
        // the previous row
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j - 1])%1000000007;
    }
    return C[r];
    /*
        int C[n + 1][k + 1];
    int i, j;
 
    // Calculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1]%mod + C[i - 1][j]%mod;
        }
    }
 
    return C[n][k];
    */
        
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}  // } Driver Code Ends