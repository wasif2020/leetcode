class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>vres;
        vector<int>v;
        if(m*n!=original.size())
            return vres;
        int ind=0;
        for(int i=0; i<m; i++){
            if(ind==original.size())
                    break;
            for(int j=0; j<n; j++){
                if(ind==original.size())
                    break;
                v.push_back(original[ind]);
                ind++;
            }
            vres.push_back(v);
            v.clear();
        }
        return vres;
    }
};