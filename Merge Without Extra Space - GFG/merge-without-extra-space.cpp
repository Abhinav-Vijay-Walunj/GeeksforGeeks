// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int a[], int b[], int n, int m) {
	    int i = 0, j = 0, k = n - 1;

    // Untill i less than equal to k
    // or j is less tha m
    while (i <= k and j < m) {
        if (a[i] < b[j])
            i++;
        else {
            swap(b[j++], a[k--]);
        }
    }
    // swap with the largest element.

    // Sort first array
    sort(a, a + n);

    // Sort second array
    sort(b, b + m);
    /*
	    int mx = 0;
    
    // Find maximum element of both array
    for (int i = 0; i < n; i++) {
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < m; i++) {
        mx = max(mx, b[i]);
    }
    
    // increment by one to avoid collision of 0 and maximum
    // element of array in modulo operation
    mx++;
    int i = 0, j = 0, k = 0;
    while (i < n && j < m && k < (n + m)) {
        
        // recover back original element to compare
        int e1 = a[i] % mx;
        int e2 = b[j] % mx;
        if (e1 <= e2) {
            if (k < n)
                a[k] += (e1 * mx);
            else
                b[k - n] += (e1 * mx);
            i++;
            k++;
        }
        else {
            
            // update element by adding multiplication
            // with new number
            if (k < n)
                a[k] += (e2 * mx);
            else
                b[k - n] += (e2 * mx);
            j++;
            k++;
        }
    }
    // process those elements which are left in array a
    while (i < n) {
        int el = a[i] % mx;
        if (k < n)
            a[k] += (el * mx);
        else
            b[k - n] += (el * mx);
        i++;
        k++;
    }
    
    // process those elements which are left in array b
    while (j < m) {
        int el = b[j] % mx;
        if (k < n)
            a[k] += (el * mx);
        else
            b[k - n] += (el * mx);
        j++;
        k++;
    }
    for (int i = 0; i < n; i++)
        a[i] = a[i] / mx;

    // finally update elements by dividing
    // with maximum element
    for (int i = 0; i < m; i++)
        b[i] = b[i] / mx;
*/
    return;
	    // code here
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends