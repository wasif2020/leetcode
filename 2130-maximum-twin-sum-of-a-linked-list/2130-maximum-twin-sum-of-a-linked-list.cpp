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
    int pairSum(ListNode* head) {
        ListNode*curr=head;
        if(head->next->next==NULL)
            return curr->val+curr->next->val;
      curr=head;
        vector<int>v;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        int mx=0;
        for(int i=0; i<v.size()/2; i++){
            mx=max(mx,v[i]+v[v.size()-i-1]);
        }
        return mx;
    }
};