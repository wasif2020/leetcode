/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_set<int>s;
        void nodes(TreeNode* root, vector<int>&v){
        if(root!=NULL){
            nodes(root->left,v);
            if(s.find(root->val)==s.end()){
                    v.push_back(root->val);
                s.insert(root->val);
            }
            nodes(root->right,v);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>v;
        if(root->left==NULL and root->right==NULL)
            return -1;
        nodes(root,v);
        int k=2;
        if(v.size()<k)
            return -1;
        priority_queue<int>pq;
        for(int i=0; i<k; i++){
            pq.push(v[i]);
        }
        for(int i=k; i<v.size(); i++){
            if(pq.top()>v[i]){
                pq.pop();
                pq.push(v[i]);
            }
        }
        return pq.top();
    }
};