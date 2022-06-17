
class Solution {
public:
    int isheight(TreeNode* root){
        if(root==NULL)
            return 0;
        int lh=isheight(root->left);
        if(lh==-1)
            return -1;
        int rh=isheight(root->right);
        if(rh==-1)
            return -1;
        if(abs(lh-rh)>1)
            return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        return isheight(root)!=-1;
    }
};