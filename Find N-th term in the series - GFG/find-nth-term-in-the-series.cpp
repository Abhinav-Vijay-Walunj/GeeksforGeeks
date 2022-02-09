// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
typedef long long ll;
class Solution {
  public:
    long long int nthOfSeries(long long int n){
        ll a=9,b=33;
        if(n ==1)
        return a;
        if(n == 2)
        return b;
    
        for(int i=2;i<=n;i++)
        {
            b+=i*16;
            
        }// code here
        return ((8*n*n)+1);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthOfSeries(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends