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
    void reorderList(ListNode* head) {
        vector<int>v;
        ListNode* h=head;
        while(h!=NULL){
            v.push_back(h->val);
            h=h->next;
        }
       
        h=head;;
        int s=0;
        int e=v.size()-1;
        while(s<=e){
            h->val=v[s];
            h=h->next;
            s++;
            if(h!=NULL){
            h->val=v[e];
            h=h->next;
            e--;
            }
            else
                break;
        }
    }
};