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
        if(list1==NULL and list2==NULL){
            return NULL;
        }
        ListNode*head=new ListNode(0);
        ListNode* curr=head;
        while(list1!=NULL or list2!=NULL){
            if(list1!=NULL and list2!=NULL){
                if (list1->val==list2->val){
                    curr->next=new ListNode(list2->val);
                    curr=curr->next;
                    curr->next=new ListNode(list1->val);
                     list1=list1->next;
                     list2=list2->next;
                }
                else if(list1->val<list2->val){
                    curr->next=new ListNode(list1->val);
                     list1=list1->next;
                
                    }
               else{
                    curr->next=new ListNode(list2->val);
                     list2=list2->next;
            }
            }
            else if(list1==NULL && list2!=NULL){
                    curr->next=new ListNode(list2->val);
                     list2=list2->next;
            }
            else{
                curr->next=new ListNode(list1->val);
                     list1=list1->next;
            }
            curr=curr->next;
        }
        return head->next;
    }
};