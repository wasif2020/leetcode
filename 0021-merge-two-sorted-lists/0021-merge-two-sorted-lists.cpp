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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode* res=new ListNode(-1);
        ListNode* temp=res;
        
        while(curr1!=NULL or curr2!=NULL){
            if(curr1!=NULL and curr2!=NULL){
                if(curr1->val>=curr2->val){
                    res->next=new ListNode(curr2->val);
                    curr2=curr2->next;
                }
                else{
                    res->next=new ListNode(curr1->val);
                    curr1=curr1->next;
                }
            }
            else if(curr1!=NULL and curr2==NULL){
                    res->next=new ListNode(curr1->val);
                    curr1=curr1->next;
            }
            else{
                    res->next=new ListNode(curr2->val);
                    curr2=curr2->next;
            }
            res=res->next;
        }
        return temp->next;
        
    }
};