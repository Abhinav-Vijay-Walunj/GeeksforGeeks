// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map>
#include <unordered_set>
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        int rows = matrix.size();
    if (rows == 0)
        return false;
 
    int columns = matrix[0].size();
 
    // map for storing the index of combination of 2 1's
    unordered_map<int, unordered_set<int> > table;
 
    // scanning from top to bottom line by line
    for (int i = 0; i < rows; ++i) {
 
        for (int j = 0; j < columns - 1; ++j) {
            for (int k = j + 1; k < columns; ++k) {
 
                // if found two 1's in a column
                if (matrix[i][j] == 1 && matrix[i][k] == 1) {
 
                    // check if there exists 1's in same
                    // row previously then return true
                    // we don't need to check (j, k) pair
                    // and again (k, j) pair because we always
                    // store pair in ascending order and similarly
                    // check in ascending order, i.e. j always less
                    // than k.
                    if (table.find(j) != table.end()
                        && table[j].find(k) != table[j].end())
                        return true;
 
                    // store the indexes in hashset
                    table[j].insert(k);
                }
            }
        }
    }
    return false;
        // Your code goes here
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int row, col;
        cin>> row>> col;

        vector<vector<int> > matrix(row);
            
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        if (ob.ValidCorner(matrix)) 
            cout << "Yes\n"; 
        else
            cout << "No\n"; 
    }

    return 0;
} 


  // } Driver Code Ends