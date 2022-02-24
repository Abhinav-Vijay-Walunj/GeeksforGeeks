// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* a, Node* b)
{
    if (a == NULL || b == NULL)
        return NULL;
 
    /* If both lists are non-empty */
 
    /* Advance the smaller list and
       call recursively */
    if (a->data < b->data)
        return findIntersection(a->next, b);
 
    if (a->data > b->data)
        return findIntersection(a, b->next);
 
    // Below lines are executed only
    // when a->data == b->data
    struct Node* temp = (struct Node*)malloc(
                  sizeof(struct Node));
    temp->data = a->data;
 
    // Advance both lists and call recursively
    temp->next = findIntersection(a->next,
                                 b->next);
    return temp;
    // Your Code Here
}