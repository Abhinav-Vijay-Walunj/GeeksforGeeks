// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        vector<int> v;
        int i,j,f;
        
        for(i=M;i<=N;i++)
        {
            if(i == 1 || i == 0 || (i%2 == 0 && i!=2))
            {
                continue;
            }
            f=1;
            
            for(j=3;j<=sqrt(i);j=j+2)
            {
                if(i%j == 0)
                {
                    f=0;
                    break;
                }
            }
            if(f == 1)
            {
                v.push_back(i);
            }
        }
        return v;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends