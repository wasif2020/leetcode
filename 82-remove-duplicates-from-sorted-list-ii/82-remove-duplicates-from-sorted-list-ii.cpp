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
        map<int,int>m;
        if(head==NULL)
            return NULL;
        ListNode* curr=head;
        while(curr!=NULL){
          m[curr->val]++;
            curr=curr->next;
        }
        curr=head;
        ListNode* temp=NULL;
        for(auto x:m){
            if(x.second==1){
                curr->val=x.first;
                temp=curr;
                curr=curr->next;
            }
        }
        if(temp==NULL)
            return NULL;
        temp->next=NULL;
    return head;
    }
};