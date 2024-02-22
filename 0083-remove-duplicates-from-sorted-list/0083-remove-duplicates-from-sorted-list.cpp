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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* curr=head;
        while(curr!=NULL and curr->next!=NULL){
            if(curr->next->val==curr->val){
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
                continue;
            }
            curr=curr->next;
        }
        return head;
        
    }
};