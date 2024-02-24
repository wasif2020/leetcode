class Solution {
public:
    void transpose(vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                swap(matrix[i][j],matrix[j][i]);
    }
    
    void reverseRow(vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0; i<n; i++){
            int s=0, e=n-1;
            while(s<e){
                swap(matrix[i][s++],matrix[i][e--]);
            }
            
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        //steps: find transpose of matrix and then reverse each row
        transpose(matrix);
        reverseRow(matrix);
    }
};