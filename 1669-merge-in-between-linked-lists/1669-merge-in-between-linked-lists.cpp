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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*curr=list1;
        ListNode*curr2=list1;
        ListNode*tail=list2;
        int count=0;
        while(count!=a-1){
            if(curr!=NULL)
                curr=curr->next;
            count++;
        }
        count=0;
        while(count!=b){
            if(curr2!=NULL)
                curr2=curr2->next;
            count++;
        }
        curr2=curr2->next;
          while(tail->next!=NULL){
            tail=tail->next;
        }
        curr->next=list2;
        tail->next=curr2;
        return list1;
    }
};