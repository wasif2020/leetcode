class Solution {
    map<Node*, Node*> M = {{0, 0}};
    Node* dfs(Node *x) {
        if (M.count(x)) return M[x];
        M[x] = new Node(x->val);
        for (Node *y : x->neighbors)
            M[x]->neighbors.push_back(dfs(y));
        return M[x];
    }
public:
    Node* cloneGraph(Node* node) {
        return dfs(node);
    }
};