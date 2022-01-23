// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    //helper function
    // void help(struct Node* node,int* ans)
    // {
    //     if(node == NULL)
    //     {
    //         return;
    //     }
    //     help(struct Node* node,&ans),help(struct Node* node,&ans));
    //     ans = 1 + max(l,r);
    // }
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if (node == NULL) 
        return 0;
    else
    { 
        /* compute the depth of each subtree */
        int lDepth = height(node->left); 
        int rDepth = height(node->right); 
    
        /* use the larger one */
        if (lDepth > rDepth) 
            return(lDepth + 1); 
        else return(rDepth + 1); 
    } 
        /*
        int depth = 0;
  
    queue<Node*>q;
    
      //Pushing first level element along with NULL
      q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
      
          //When NULL encountered, increment the value
        if(temp == NULL){
            depth++;
        }
          
          //If NULL not encountered, keep moving
        if(temp != NULL){
            if(temp->left){q.push(temp->left);
            }
              if(temp->right){
                q.push(temp->right);
            }
        }
      
          //If queue still have elements left,
          //push NULL again to the queue.
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    return depth;
    */
        // code here 
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
        Solution ob;
		cout<<ob.height(root)<<endl;
    }
    return 0;
}  // } Driver Code Ends