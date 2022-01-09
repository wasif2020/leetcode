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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     vector<int>v;
        ListNode* curr=head;
        if(head->next==NULL)
            return head;
        int i=1;
        while(curr!=NULL && i<=right){
            if(i>=left){
                v.push_back(curr->val);
            }
            curr=curr->next;
            i++;
        }
        reverse(v.begin(),v.end());
        i=1;
        curr=head;
        int j=0;
        while(curr!=NULL && i<=right){
            if(i>=left){
                curr->val=v[j];
                j++;
            }
            curr=curr->next;
            i++;
        }
        return head;
    }
};