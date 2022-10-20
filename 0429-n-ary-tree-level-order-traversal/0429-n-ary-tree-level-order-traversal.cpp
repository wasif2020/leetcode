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
        if(root==NULL)
            return v;
        vector<int>vi;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(q.size()>1){
            Node* curr=q.front();
            q.pop();
            if(curr==NULL){
                q.push(NULL);
                v.push_back(vi);
                vi.clear();
                continue;
            }
            vi.push_back(curr->val);
            for(int i=0; i<curr->children.size(); i++)
                q.push(curr->children[i]);
        }
        v.push_back(vi);
        return v;
    }
};