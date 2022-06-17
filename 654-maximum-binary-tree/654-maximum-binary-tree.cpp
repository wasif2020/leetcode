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
    TreeNode* ctree(vector<int>&nums,int is, int ie){
        if(is>ie)
            return NULL;
        int index=is;
        for(int i=is; i<=ie; i++){
            if(nums[i]>nums[index]){
                index=i;
            }
        }
        TreeNode* root=new TreeNode(nums[index]);
        root->left=ctree(nums,is,index-1);
        root->right=ctree(nums,index+1,ie);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n=nums.size()-1;
        return ctree(nums,0,n);
    }
};