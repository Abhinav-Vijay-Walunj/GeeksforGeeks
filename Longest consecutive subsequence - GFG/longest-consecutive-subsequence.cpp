// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        int ans = 0, count = 0;

// sort the array
sort(arr, arr + n);

vector<int> v;
v.push_back(arr[0]);

//insert repeated elements only once in the vector
for (int i = 1; i < n; i++)
{
if (arr[i] != arr[i - 1])
v.push_back(arr[i]);
}
// find the maximum length
// by traversing the array
for (int i = 0; i < v.size(); i++)
{

// Check if the current element is equal
// to previous element +1
if (i > 0 && v[i] == v[i - 1] + 1)
count++;
// reset the count
else
count = 1;

// update the maximum
ans = max(ans, count);
}
return ans;
}
        /*
        sort(arr,arr+n);
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        int c=1,ans=0;
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(*i +1 == *(i+1))
            {
                c++;
            }
            else
            {
                c=1;
            }
            
            
            if(c>ans)
            {
                ans=c;
            }
            
        }
        return ans;
        */
      //Your code here
    
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends