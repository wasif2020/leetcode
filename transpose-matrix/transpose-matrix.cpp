class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>v;
        vector<int>v1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                v1.push_back(matrix[j][i]);
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
    }
};