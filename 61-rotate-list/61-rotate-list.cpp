/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        ListNode* temp=head;
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(k>=len)
            k=k%len;
        if(k==0)
            return head;
    temp=head;
        for(int i=1; i<len-k; i++){
            temp=temp->next;
        }
        ListNode* curr=temp->next;
        temp->next=NULL;
        temp=curr;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        head=curr;
        
        return head;
    }
};