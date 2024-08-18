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
    vector<int> leader(vector<int>v){
        vector<int>lead;
        int n=v.size();
        int lead_right=v[n-1];
        lead.push_back(lead_right);
        for(int i=v.size()-2; i>=0; i--){
            if(v[i]>=lead_right){
                lead.push_back(v[i]);
                lead_right=v[i];
            }
        }
        return lead;
    }
    ListNode* removeNodes(ListNode* head) {
        //find the leaders and keep only leaders
        if(head->next==NULL) return head;
        vector<int>v;
        ListNode* curr=head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        
        vector<int> leader_element=leader(v);
        curr=head;
        ListNode* temp=NULL;
        for(int i=leader_element.size()-1; curr!=NULL and i>=0; i--){
            curr->val=leader_element[i];
            temp=curr;
            curr=curr->next;
        }
        temp->next=NULL;
        return head;
    }
};