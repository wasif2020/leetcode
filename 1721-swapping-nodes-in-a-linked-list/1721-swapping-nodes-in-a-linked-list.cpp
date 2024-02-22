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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL) return head;
        int len=0;
        ListNode* curr=head;
        while(curr!=NULL){
            len++;
            curr=curr->next;
        }
        curr=head;
        for(int i=1;i<k and curr!=NULL; i++)
            curr=curr->next;
        int valL=curr->val;
        curr=head;
        for(int j=1; j<=len-k and curr!=NULL; j++)
            curr=curr->next;
        int valR=curr->val;
        curr=head;
        for(int i=1;i<k and curr!=NULL; i++)
            curr=curr->next;
        curr->val=valR;
        curr=head;
        for(int j=1; j<=len-k and curr!=NULL; j++)
            curr=curr->next;       
        curr->val=valL;

        return head;
    }
};