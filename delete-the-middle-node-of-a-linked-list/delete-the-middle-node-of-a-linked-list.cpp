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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            delete head;
        return NULL;
        }
        int n=0;
        ListNode* curr=head;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        n=n/2;
        curr=head;
        for(int i=1; i<n; i++){
            curr=curr->next;
        }
        ListNode* temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
        return head;
    }
};