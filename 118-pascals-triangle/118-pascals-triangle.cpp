class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i=1;
        vector<vector<int>>v;
        vector<int>vi;
        vi.push_back(1);
        v.push_back(vi);
        for(int i=1; i<numRows; i++){
            vi.clear();
            if(i==1){
                vi.push_back(1);
                vi.push_back(1);
                v.push_back(vi);
                continue;
            }
            for(int j=0; j<=v[i-1].size(); j++){
                if(j==0 or j==v[i-1].size()){
                    vi.push_back(1);
                }
                else{
                    vi.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(vi);
        }
        return v;
    }
};