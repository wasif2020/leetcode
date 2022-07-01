class Solution {
public:
    void rotate(vector<vector<int>>&mat){
        int n=mat.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<j)
                  swap(mat[i][j],mat[j][i]);
            }
        }
          for(int i=0; i<n; i++){
            int s=0;
            int e=n-1;
            while(s<e){
                swap(mat[i][s],mat[i][e]);
                s++;
                e--;
            }
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0; i<4; i++){
            rotate(mat);
            if(target==mat)
                return true;
        }
        return false;
    }
};