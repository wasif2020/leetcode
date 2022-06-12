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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
                vector<int>vr;
        if(head==NULL || head->next==NULL || head->next->next==NULL){
            vr.push_back(-1);
            vr.push_back(-1);
            return vr;
        }   
        vector<int>v;
        ListNode*prev=head;
        ListNode*curr=head->next;
        int count=1;
        while(curr->next!=NULL){
            count++;
            if(prev->val>curr->val and curr->val<curr->next->val)
                v.push_back(count);
            if(prev->val<curr->val and curr->val>curr->next->val)
                v.push_back(count);
            prev=curr;
            curr=curr->next;
        }
        
        if(v.size()<2){
            vr.push_back(-1);
            vr.push_back(-1);
            return vr;
        }
        int minn=v[1]-v[0];
        int maxx=v[v.size()-1]-v[0];
        for(int i=0; i<v.size()-1; i++){
            if(v[i+1]-v[i]<minn)
                minn=v[i+1]-v[i];
        }
        vr.push_back(minn);
        vr.push_back(maxx);
        return vr;
    }
};