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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>h;
        if(head==NULL)
            return false;
        ListNode* curr=head;
        while(curr!=NULL){
            if(h.find(curr->next)!=h.end())
                return true;
            h.insert(curr);
                curr=curr->next;
        }
        return false;
    }
};