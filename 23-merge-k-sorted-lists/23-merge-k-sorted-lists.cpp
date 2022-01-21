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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0; i<lists.size(); i++){
            ListNode* curr=lists[i];
            while(curr!=NULL){
                pq.push(curr->val);
                curr=curr->next;
            }
            
        }
        ListNode* res=new ListNode(-1);
        ListNode* r=res;
        while(pq.empty()==false){
            res->next=new ListNode(pq.top());
            res=res->next;
            pq.pop();
        }
        return r->next;
    }
};