// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int xorCal(int k){
        if (k == 1)
        return 2;
     
    // if k is of form 2^i-1
    if (((k + 1) & k) == 0)
        return k / 2;
 
    return -1;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        Solution ob;
        cout<<ob.xorCal(k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends