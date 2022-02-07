
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) 
            return 0;
        int res=1;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        while(q.empty()==false){
            int count=q.size();
            int st=q.front().second;
            int en=q.back().second;
            res=max(res,en-st+1);
            for(int i=0; i<count; i++){
                pair<TreeNode*,unsigned long long>p=q.front();
                unsigned long long idx=p.second-st;
                q.pop();
                if(p.first->left!=NULL)
                    q.push({p.first->left,2*idx+1});
                if(p.first->right!=NULL)
                    q.push({p.first->right,2*idx+2});
            }
        }
        return res;
    }
};