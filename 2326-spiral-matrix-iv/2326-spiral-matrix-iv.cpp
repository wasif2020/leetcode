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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        ListNode* curr=head;
        vector<vector<int>>res;
        vector<int>v(n,-1);
        for(int i=0; i<m; i++)
            res.push_back(v);

        int rowTop=0, rowBot=m-1, colLeft=0, colRight=n-1;
        int idx=0;
        while(curr!=NULL){
     
                for(int i=colLeft; i<=colRight and curr!=NULL; i++){
                    res[rowTop][i]=curr->val;
                    curr=curr->next;
                }
                rowTop++;
            
    
                for(int i=rowTop; i<=rowBot and curr!=NULL; i++){
                    res[i][colRight]=curr->val;
                    curr=curr->next;
                }
                colRight--;
            
          
                for(int i=colRight; i>=colLeft and curr!=NULL; i--){
                    res[rowBot][i]=curr->val;
                    curr=curr->next;
                }
                rowBot--;
            
     
                for(int i=rowBot; i>=rowTop and curr!=NULL; i--){
                    res[i][colLeft]=curr->val;
                    curr=curr->next;
                }
                colLeft++;
            
        }      
     return res;        
    }
};