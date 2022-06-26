class Solution {
public:
    int res=0;
    int robb(vector<int>&nums,int n,vector<int>&dp){
        if(n==0)
            dp[n]=nums[0];
        if(n==1)
            dp[n]=max(nums[1],nums[0]);
      if(dp[n]==-1){
        for(int i=0;i<n-1; i++)
            res=max(nums[n]+robb(nums,n-2,dp),robb(nums,n-1,dp));
        dp[n]=res;
        }
     return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dp(n+1,-1);
        return max(robb(nums,n-1,dp),robb(nums,n-2,dp));
    }
};