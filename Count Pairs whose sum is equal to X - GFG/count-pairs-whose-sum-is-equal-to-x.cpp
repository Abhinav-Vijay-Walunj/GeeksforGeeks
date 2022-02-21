// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, struct Node** tailRef, int newData) {
    struct Node* new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
    }

    else {
        (*tailRef)->next = new_node;
    }
    *tailRef = new_node;
}

void printList(struct Node* head) {
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
}


 // } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        int count = 0;
     
    unordered_set<int> us;
     
    // insert all the elements of 1st list
    // in the hash table(unordered_set 'us')
    while (head1 != NULL)
    {
        us.insert(head1->data);   
         
        // move to next node   
        head1 = head1->next;
    }
     
    // for each element of 2nd list
    while (head2 != NULL)   
    {
        // find (x - head2->data) in 'us'
        if (us.find(x - head2->data) != us.end())
            count++;
         
        // move to next node
        head2 = head2->next;   
    }
    // required count of pairs    
    return count;
    /*
        int c=0;
        Node* t1=head1;
        Node* t2=head2;
        while(t1 != NULL)
        {
            while(t2 != NULL)
            {
                if((t1->data + t2->data)==x)
                {
                    c++;
                }
                t2=t2->next;
            }
            t2=head2;
            t1=t1->next;
            
        }
        return c;
*/        // Code here
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        struct Node* head1 = NULL;
        struct Node* tail1 = NULL;
        struct Node* tail2 = NULL;
        struct Node* head2 = NULL;
        int n1, n2, tmp, x;
        cin >> n1;
        while (n1--) {
            cin >> tmp;
            append(&head1, &tail1, tmp);
        }
        cin >> n2;
        while (n2--) {
            cin >> tmp;
            append(&head2, &tail2, tmp);
        }
        cin >> x;
        Solution obj;
        cout << obj.countPairs(head1, head2, x) << '\n';
    }
    return 0;
}  // } Driver Code Ends