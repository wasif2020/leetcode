// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
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
    Node* divide(int N, Node *head){
        if(head==NULL or head->next==NULL){
            return head;
        }
       Node* es=NULL;
       Node* ee=NULL;
       Node* os=NULL;
       Node* oe=NULL;
       for(Node* curr=head; curr!=NULL; curr=curr->next){
           int x=curr->data;
           if(x%2==0){
               if(es==NULL){
                   es=curr;
                   ee=es;
               }
               else{
                   ee->next=curr;
                   ee=ee->next;
           }
       }
       else{
           if(os==NULL){
               os=curr;
               oe=os;
           }
           else{
               oe->next=curr;
               oe=oe->next;
           }
       }
}
if(es==NULL or os==NULL){
    return head;
}
ee->next=os;
oe->next=NULL;
return es;
      
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends