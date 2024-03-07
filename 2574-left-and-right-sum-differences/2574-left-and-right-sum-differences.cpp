class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        vector<int>L(n);
        vector<int>R(n);
        L[0]=0;
        R[n-1]=0;
        for(int i=0; i<nums.size()-1; i++){
            L[i+1]=L[i]+nums[i];
        }
        for(int i=n-1; i>0; i--){
            R[i-1]=R[i]+nums[i];
        }        
        for(int i=0; i<n; i++){
            res[i]=abs(L[i]-R[i]);
        }
        return res;
    }
};