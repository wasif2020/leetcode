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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>h;
        if(head==NULL)
            return NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            if(h.find(curr->next)!=h.end())
                return curr->next;
            h.insert(curr);
                curr=curr->next;
        }
        return NULL;
    }
};