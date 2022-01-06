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
        ListNode* curr=head;
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        int res=head->val;
        while(curr->next!=NULL){
            if(curr->next->val==res){
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
                continue;
            }
            curr=curr->next;
            res=curr->val;
        }
        return head;
    }
    
};