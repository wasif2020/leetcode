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
    int pi=0;
    TreeNode* ctree(vector<int>&preorder, vector<int>&inorder, int is, int ie){
        if(is>ie)
            return NULL;
        TreeNode* root=new TreeNode(preorder[pi++]);
        int index;
        for(int i=is; i<=ie; i++){
            if(inorder[i]==root->val){
                index=i;
                break;   
            }
        }
        root->left=ctree(preorder,inorder,is,index-1);
        root->right=ctree(preorder,inorder,index+1,ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int ie=preorder.size()-1;
        return ctree(preorder,inorder,0,ie);
    }
};