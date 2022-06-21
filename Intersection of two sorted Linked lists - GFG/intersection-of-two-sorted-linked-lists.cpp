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

Node* findIntersection(Node* head1, Node* head2)
{
    Node*curr1=head1;
    Node*curr2=head2;
    set<int>s1;
    while(curr1!=NULL){
        s1.insert(curr1->data);
        curr1=curr1->next;
    }
    set<int>s2;
    while(curr2!=NULL){
        if(s1.find(curr2->data)!=s1.end()){
        s2.insert(curr2->data);
        }
        curr2=curr2->next;
    }
    Node* head=new Node(-1);
    Node*curr=head;
    while(s2.empty()==false){
        auto it=s2.begin();
        curr->next=new Node(*it);
        curr=curr->next;
        s2.erase(it);
    }
    return head->next;
}