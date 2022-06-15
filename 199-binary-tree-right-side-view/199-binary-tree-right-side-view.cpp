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
        q.push(NULL);
        q.push(root);
        while(q.size()>1){
                TreeNode* curr=q.front();
                q.pop();
                if(curr==NULL){
                    TreeNode* value=q.front();
                    v.push_back(value->val);
                    q.push(NULL);
                    continue;
                }
                if(curr->right!=NULL)
                    q.push(curr->right);
                if(curr->left!=NULL)
                    q.push(curr->left);
            
        }
        return v;
    }
};