// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
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
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        stack<int>s1;
        stack<int>s2;
        struct Node* curr1=first;
        while(curr1!=NULL){
            s1.push(curr1->data);
            curr1=curr1->next;
        }
        struct Node* curr2=second;
        while(curr2!=NULL){
            s2.push(curr2->data);
            curr2=curr2->next;
        }
        stack<int>res;
        int b=0;
        while(!s1.empty() or !s2.empty()){
            if(s1.empty()==false and s2.empty()==false){
                int d=s1.top()+s2.top();
                d=d+b;
                b=d/10;
                d=d%10;
                res.push(d);
                s1.pop();
                s2.pop();
            }
            else if(s1.empty()==false and s2.empty()==true){
               int d=s1.top();
                d=d+b;
                b=d/10;
                d=d%10;
                res.push(d);
                s1.pop();
            }
            else
            {
                int d=s2.top();
                d=d+b;
                b=d/10;
                d=d%10;
                res.push(d);
                s2.pop();
            }
        }
         if(b!=0){
                res.push(b);
            }
        struct Node* root=new Node(res.top());
        struct Node* curr=root;
        res.pop();
        while(res.empty()==false){
            curr->next=new Node(res.top());
            curr=curr->next;
            res.pop();
        }
        return root;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends