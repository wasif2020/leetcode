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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
     /*
     step 1. insert all array elements inside an unorderset
     step 2. iterate through the linkedlist and check if the current node val is presnt in the 
             unorderedset, then delete the node.
     step 3. at the end, return head;
     */
        unordered_set<int>s(nums.begin(),nums.end());
        while(head!=NULL and s.find(head->val)!=s.end()){
         head=head->next;
        }
        ListNode* curr=head;
        while(curr!=NULL and curr->next!=NULL){
            if(s.find(curr->next->val)!=s.end()){
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
            }
            else{
                curr=curr->next;
            }
        }
       return head; 
        
    }
};