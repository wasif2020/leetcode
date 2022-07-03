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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode* curr=head;
        if(head->next==NULL){
            v.push_back(0);
            return v;
        }
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        vector<int>vr;
        int n=v.size();
        vr.push_back(0);
        stack<int>s;
        s.push(v[n-1]);
        for(int i=n-2; i>=0; i--){
            while(s.empty()==false and v[i]>=s.top())
                s.pop();
            int val=(s.empty()?0:s.top());
            vr.push_back(val);
            s.push(v[i]);
        }
        reverse(vr.begin(),vr.end());
        return vr;
    }
};