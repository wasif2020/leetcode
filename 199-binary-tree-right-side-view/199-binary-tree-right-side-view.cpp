/**
iterative solution to find right view of binary tree
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
            int n=q.size();
            for(int i=0; i<n; i++){
                TreeNode* curr=q.front();
                q.pop();
                if(i==0){
                    v.push_back(curr->val);
                }
                if(curr->right!=NULL)
                    q.push(curr->right);
                if(curr->left!=NULL)
                    q.push(curr->left);
            }
        }
        return v;
    }
};