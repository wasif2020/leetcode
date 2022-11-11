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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=new TreeNode(val);
        TreeNode*curr=root;
        if(root==NULL)
            return temp;
        TreeNode* parent=NULL;
        bool flag=true;
        while(curr!=NULL){
            parent=curr;
            if(curr->val>val){
                flag=true;
                curr=curr->left;
            }
            else if(curr->val<val){
                flag=false;
                curr=curr->right;
            }
            else{
                break;
            }
        }
        if(flag==true){
            parent->left=temp;
            return root;
        }
        parent->right=temp;
        return root;
    }
};