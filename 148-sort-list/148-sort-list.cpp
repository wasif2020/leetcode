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
    ListNode* sortList(ListNode* head) {
        multiset<int>s;
        ListNode*curr=head;
        if(head==NULL)
            return NULL;
        while(curr!=NULL){
            s.insert(curr->val);
            curr=curr->next;
        }
        curr=head;
        for(auto x:s){
            curr->val=x;
            curr=curr->next;
        }
        return head;
    }
};