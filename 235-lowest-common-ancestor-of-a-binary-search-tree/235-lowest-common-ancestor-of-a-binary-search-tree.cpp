/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode*lca(TreeNode* root, int n1, int n2){
        if(root==NULL)
            return NULL;
        if(root->val==n1 or root->val==n2)
            return root;
        TreeNode* lca1=lca(root->left,n1,n2);
        TreeNode* lca2=lca(root->right,n1,n2);
        if(lca1!=NULL and lca2!=NULL)
            return root;
        if(lca1!=NULL)
            return lca1;
        else
            return lca2;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root,p->val,q->val);
    }
};