class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        int matncm=n*m;
        int matrcc=r*c;
        if(matncm!=matrcc) return mat;
        
        vector<vector<int>>res;
        vector<int>v;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                v.push_back(mat[i][j]);
        
        int idx=0;
        for(int i=0; i<r; i++){
            vector<int>temp;
            for(int i=0; i<c; i++){
                temp.push_back(v[idx++]);
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};