/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>v;
        vector<int>vi;
        if(root==NULL)
            return v;
        queue<Node*>q;
        q.push(NULL);
        q.push(root);
        vi.push_back(root->val);
        while(q.size()>1){
            Node*curr=q.front();
            q.pop();
            if(curr==NULL){
                v.push_back(vi);
                vi.clear();
                q.push(NULL);
                continue;
            }
            for(auto x:curr->children){
                q.push(x);
                vi.push_back(x->val);
                
            } 
        }
        return v;
    }
};