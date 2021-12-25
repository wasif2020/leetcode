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
    ListNode* addtwono(vector<int>&v1, vector<int>&v2) {
      int count=0;
        int d=0;
        d=(v1[v1.size()-1]+v2[v2.size()-1]+count)%10;
        int i=v1.size()-2;
        int j=v2.size()-2;
        count=(v1[v1.size()-1]+v2[v2.size()-1]+count)/10;
        vector<int>vec;
        vec.push_back(d);
        
        while(i!=-1 or j!=-1){
          if(i!=-1 and j!=-1){
                d=(v1[i]+v2[j]+count)%10;
                count=(v1[i]+v2[j]+count)/10;
                vec.push_back(d);
                i--;
              j--;
            }
            else if(i==-1 && j!=-1){
                 d=(v2[j]+count)%10;
                count=(v2[j]+count)/10;
                vec.push_back(d);
              j--;
            }
            else{
                d=(v1[i]+count)%10;
                count=(v1[i]+count)/10;
                vec.push_back(d);
                i--;
            }
        }
        if(count!=0)
            vec.push_back(count);
        reverse(vec.begin(),vec.end());
        ListNode* head=new ListNode(vec[0]);
        ListNode* curr=head;
        for(int i=1; i<vec.size(); i++){
            curr->next=new ListNode(vec[i]);
            curr=curr->next;
        }
        return head;
    
    }

 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>v1;
        vector<int>v2;
        while(l1!=NULL or l2!=NULL){
            if(l1!=NULL){
                v1.push_back(l1->val);
                l1=l1->next;
            }
            if(l2!=NULL){
                v2.push_back(l2->val);
                l2=l2->next;
            }
        }
        return addtwono(v1,v2);
    }
};