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
    TreeNode* ctree(vector<int>inorder, vector<int>postorder, int is, int ie){
        if(is>ie)
            return NULL;
        TreeNode* root=new TreeNode(postorder[pi++]);
        int index;
        for(int i=is; i<=ie; i++){
            if(inorder[i]==root->val){
                index=i;
                break;   
            }
        }
        root->right=ctree(inorder,postorder,index+1,ie);
        root->left=ctree(inorder,postorder,is,index-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int ie=postorder.size()-1;
        reverse(postorder.begin(),postorder.end());
        return ctree(inorder,postorder,0,ie);
    }
};