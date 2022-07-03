class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>v;
        int n=mat.size();
        int m=mat[0].size();
        if(n==1 and m==1){
            v.push_back(mat[0][0]);
            return v;
        }
        int row=0;
        int col=0;
        bool up=true;
        while(row<n and col<m){
            if(up){
                while(row>0 and col<m-1){
                    v.push_back(mat[row][col]);
                    row--;
                    col++;
                }
                v.push_back(mat[row][col]);
                if(col==m-1)
                    row++;
                else
                    col++;
            }
            else{
                while(row<n-1 and col>0){
                    v.push_back(mat[row][col]);
                    row++;
                    col--;
                }
                v.push_back(mat[row][col]);
                if(row==n-1)
                    col++;
                else
                    row++;
            }
            up=!up;
        }
        return v;
    }
};