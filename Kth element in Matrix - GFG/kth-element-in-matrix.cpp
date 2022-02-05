// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends



int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    auto cmp = [=](pair<int, int> a, pair<int, int> b) {
        return mat[a.first][a.second] > mat[b.first][b.second];
    };

    //DECLARING priority_queue AND PUSHING FIRST ROW IN IT
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
    for (int i = 0; i < n; i++) {
        pq.push({ i,0 });
    }

    //RUNNING LOOP FOR (k-1) TIMES
    for (int i = 1; i < k; i++) {
        auto p = pq.top();
        pq.pop();

        //AFTER POPPING, WE'LL PUSH NEXT ELEMENT OF THE ROW IN THE HEAP
        if (p.second + 1 < n) pq.push({ p.first,p.second + 1 });
    }
    // ON THE k'th ITERATION, pq.top() will be our answer.
    return mat[pq.top().first][pq.top().second];
  //Your code here
}
