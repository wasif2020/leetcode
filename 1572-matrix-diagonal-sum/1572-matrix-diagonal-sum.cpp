class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int top=0;
        int right=n-1;
        int left=0;
        int bottom=n-1;
        int sum=0;
        while(top<=bottom and left<=right){
            if(top==bottom and left==right){
                sum=sum+mat[top][bottom];
                return sum;
            }
            sum=sum+mat[top][left]+mat[top][right]+mat[bottom][left]+mat[right][bottom];
            top++;
            bottom--;
            left++;
            right--;
        }
        return sum;
    }
};