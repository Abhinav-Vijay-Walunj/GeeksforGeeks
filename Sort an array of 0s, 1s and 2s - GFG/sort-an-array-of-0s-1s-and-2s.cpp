// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    typedef long long ll;
    public:
    void sort012(int arr[], int n)
    {
        int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;

// Count the number of 0s, 1s and 2s in the array
for (i = 0; i < n; i++) {
switch (arr[i]) {
case 0:
cnt0++;
break;
case 1:
cnt1++;
break;
case 2:
cnt2++;
break;
}
}

// Update the array
i = 0;

// Store all the 0s in the beginning
while (cnt0 > 0) {
arr[i++] = 0;
cnt0--;
}

// Then all the 1s
while (cnt1 > 0) {
arr[i++] = 1;
cnt1--;
}

// Finally all the 2s
while (cnt2 > 0) {
arr[i++] = 2;
cnt2--;
}

        //sort(arr,arr+n);
        /*
        ll a=0,b=0,c=0;
        
        for(ll i=0;i<n;i++)
        {
            if(arr[i]==0)
                a++;
            else if(arr[i] == 1)
                b++;
            else
                c++;
            
        }
        
        for(ll i=0;i<n;i++)
        {
            if(i<a)
            {
                //cout<<0<<" ";
                arr[i]=0;
            }
            else if(a<= i <a+b)
            {
                //cout<<1<<" ";
                arr[i]=1;
            }
            else if(a+b <= i < a+b+c)
            {
                //cout<<2<<" ";
                arr[i]=2;
            }
        }
        cout<<endl;
        */
        // coode here 
    
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends