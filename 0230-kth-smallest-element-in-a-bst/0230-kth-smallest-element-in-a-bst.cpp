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
    void nodes(TreeNode* root, vector<int>&v){
        if(root!=NULL){
            nodes(root->left,v);
            v.push_back(root->val);
            nodes(root->right,v);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        nodes(root,v);
        priority_queue<int>pq;
        for(int i=0; i<k; i++)
            pq.push(v[i]);
        for(int i=k; i<v.size(); i++){
            if(pq.top()>v[i]){
                pq.pop();
                pq.push(v[i]);
            }
        }
        return pq.top();
    }
};