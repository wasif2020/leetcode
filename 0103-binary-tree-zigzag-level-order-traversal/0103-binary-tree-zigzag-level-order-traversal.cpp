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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        vector<int>vi;
        if(root==NULL)
            return v;
        
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(q.empty()==false){
            TreeNode* curr=q.front();
            int count=q.size();
            if(flag){
                for(int i=0; i<count; i++){
                    curr=q.front();
                    vi.push_back(curr->val);
                    q.pop();
                    if(curr->left)
                        q.push(curr->left);
                    if(curr->right)
                        q.push(curr->right);
                }
             v.push_back(vi);
                vi.clear();
                flag=!flag;
            }
            else{
                    for(int i=0; i<count; i++){
                        curr=q.front();
                    vi.push_back(curr->val);
                    q.pop();
                    if(curr->left)
                        q.push(curr->left);
                    if(curr->right)
                        q.push(curr->right);
                    }
                reverse(vi.begin(),vi.end());
                v.push_back(vi);
                vi.clear();
                flag=!flag;
            }
        }
        return v;
    }
};