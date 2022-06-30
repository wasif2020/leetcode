class Solution {
public:
    void transpose(vector<vector<int>>&matrix){
        int n=matrix.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<j)
                  swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
       transpose(matrix);
        for(int i=0; i<n; i++){
            int s=0;
            int e=n-1;
            while(s<e){
                swap(matrix[i][s],matrix[i][e]);
                s++;
                e--;
            }
        }

    }
};