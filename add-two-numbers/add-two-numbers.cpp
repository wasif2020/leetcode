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
    int count=0;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int count=0;
        int d=0;
        ListNode* head=new ListNode(0);
        ListNode* curr=head;
        while(l1!=NULL or l2!=NULL){
            if(l1!=NULL && l2!=NULL){
                d=(l1->val + l2->val+count)%10;
                count=(l1->val + l2->val+count)/10;
                curr->next=new ListNode(d);
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1==NULL && l2!=NULL){
                d=(l2->val+count)%10;
                count=(l2->val+count)/10;
                curr->next=new ListNode(d);
                l2=l2->next;
            }
            else{
                d=(l1->val+count)%10;
                count=(l1->val+count)/10;
                curr->next=new ListNode(d);
                l1=l1->next;
            }
            curr=curr->next;
        }
        if(count!=0)
            curr->next=new ListNode(count);
        return head->next;
    }
};