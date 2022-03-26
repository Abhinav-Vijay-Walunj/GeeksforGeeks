// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    bool isMajority(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)

        if (a[i] == cand)
            count++;

    if (count > size / 2)
        return 1;

    else
        return 0;
}
    int majorityElement(int a[], int size)
    {
    int maj_index = 0, count = 1;
    for (int i = 1; i < size; i++) {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    if(isMajority(a,size,a[maj_index]))
    {
        return a[maj_index];
    }
    return -1;
    /*
        int ans=0,temp,index;
        for(int i=0;i<size;i++)
        {
            temp=0;
            for(int j=0;j<size;j++)
            {
                if(a[i] == a[j])
                {
                    temp++;
                }
            }
            if(temp>ans)
            {
                ans=temp;
                index=i;
            }
            
        }
        if(ans>size/2)
        {
            return a[index];
        }
        return -1;
        */
        // your code here
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends