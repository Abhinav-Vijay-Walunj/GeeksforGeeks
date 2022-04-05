// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int countSquare(int base)
    {
        base = (base - 2);
  
   // Since each square has base of
   // length of 2
   base = floor(base / 2);
  
   return base * (base + 1)/2;
    }
   /*
        int l=B-2;
        
        return (l*(l+1))/2;
	    // code here 
    }*/
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int B,count;
    	cin>>B;
    	Solution ob;
    	count = ob.countSquare(B);
    	cout<<count<<endl;
    }
}  // } Driver Code Ends