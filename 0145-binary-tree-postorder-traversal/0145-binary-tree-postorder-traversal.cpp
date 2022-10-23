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
    vector<int> postorderTraversal(TreeNode* root) {
        //iterative solution
        vector<int>v;
        stack<TreeNode*>s1,s2;
        if(root==NULL)
            return v;
        TreeNode* curr=root;
        s1.push(curr);
        while(s1.empty()==false){
            curr=s1.top();
            s1.pop();
            s2.push(curr);
            if(curr->left)
                s1.push(curr->left);
            if(curr->right)
                s1.push(curr->right);
        }
        while(s2.empty()==false){
            int x=s2.top()->val;
            v.push_back(x);
            s2.pop();
        }
        return v;
    }
};