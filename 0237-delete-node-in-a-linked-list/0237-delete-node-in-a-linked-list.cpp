/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* curr=node;
        ListNode* tail=NULL;
        while(curr!=NULL and curr->next!=NULL){
            if(curr->next->next==NULL){
                tail=curr;
            }
            curr->val=curr->next->val;
            curr=curr->next;
        }
        ListNode* temp=tail->next;
        tail->next=NULL;
        delete temp;
        
    }
};