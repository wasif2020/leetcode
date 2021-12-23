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
    int maxlevel=0;
    vector<int>v;
    vector<int> rightv(TreeNode* root, int level){
        if(root!=NULL){
           if(maxlevel<level){
               v.push_back(root->val);
               maxlevel=level;
           }
            rightv(root->right,level+1);
            rightv(root->left,level+1);
        }
        return v;
        
    }
    vector<int> rightSideView(TreeNode* root) {
        return rightv(root,1);
    }
};