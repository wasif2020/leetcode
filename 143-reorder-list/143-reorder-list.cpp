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