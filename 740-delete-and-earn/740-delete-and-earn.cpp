class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        
        int dp[20005];
        memset(dp,0,sizeof(dp));
        
        dp[0]=0;dp[1]=mp[1];
        
        for(int i=2;i<20005;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+mp[i]*i);
        }
        
        return dp[20004];
        
    }
};