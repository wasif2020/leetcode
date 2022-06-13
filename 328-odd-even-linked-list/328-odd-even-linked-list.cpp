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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL or head->next==NULL or head->next->next==NULL)
            return head;
        ListNode*curr=head;
        ListNode*temp1=curr->next;
        ListNode*temp=curr->next;
        while(temp!=NULL and temp->next!=NULL){
            ListNode *del=temp->next;
            ListNode *newtemp=new ListNode(del->val);
            curr->next=newtemp;
            newtemp->next=temp1;
            temp->next=temp->next->next;
            temp=temp->next;
            curr=newtemp;
            if(del->next==NULL){
                delete del;
                    break;
            }
            delete del;
            
        }
        return head;
    }
};