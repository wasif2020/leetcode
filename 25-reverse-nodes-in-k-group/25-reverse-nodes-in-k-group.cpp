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
    void reverse(vector<int>&v,int s,int e){
        while(s<e){
            swap(v[s++],v[e--]);
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>v;
        ListNode* curr=head;
        if(head==NULL)
            return head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        int n=v.size();
        for(int i=0; i<n; i=i+k){
            if(i+k>n){
                break;
            }
            reverse(v,i,i+k-1);
        }
        curr=head;
        int i=0;
        while(curr!=NULL){
            curr->val=v[i++];
            curr=curr->next;
        }
        return head;
    }
};