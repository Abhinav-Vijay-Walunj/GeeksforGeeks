// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool SieveOfEratosthenes(int n, bool isPrime[])
{
    // Initialize all entries of boolean array
    // as true. A value in isPrime[i] will finally
    // be false if i is Not a prime, else true
    // bool isPrime[n+1];
    isPrime[0] = isPrime[1] = false;
    for (int i=2; i<=n; i++)
        isPrime[i] = true;
 
    for (int p=2; p*p<=n; p++)
    {
        // If isPrime[p] is not changed, then it is
        // a prime
        if (isPrime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*p; i<=n; i += p)
                isPrime[i] = false;
        }
    }
}
    vector<int> primeDivision(int n){
        bool isPrime[n+1];
        vector<int> v;
    SieveOfEratosthenes(n, isPrime);
 
    // Traversing all numbers to find first
    // pair
    for (int i=0; i<n; i++)
    {
        if (isPrime[i] && isPrime[n-i])
        {
            v.push_back(i);
            v.push_back(n-i);
            return v;
        }
    }
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends