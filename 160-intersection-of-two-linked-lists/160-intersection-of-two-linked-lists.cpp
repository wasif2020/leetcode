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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int s1=0;
        int s2=0;
        if(headA==NULL or headB==NULL)
            return NULL;
        ListNode *curr=headA;
        ListNode *curr1=headB;

        while(curr!=NULL){
            s1++;
            curr=curr->next;
        }
        while(curr1!=NULL){
            s2++;
            curr1=curr1->next;
        }
        curr=headA;
        curr1=headB;
        int d=abs(s1-s2);
         if(s1>s2){
            while(d>0){
                curr=curr->next;
                d--;
            }
        }
        else if(s1<s2){
             while(d>0){
                curr1=curr1->next;
                 d--;
             }
        }
        while(curr!=curr1){
            curr=curr->next;
            curr1=curr1->next;
        }
        return curr;
    }
};