class Solution {
public:
    int solve(vector<int>&cost,int n,vector<int>&dp){
        if(n==0 or n==1)
            return cost[n];
        //step2
        if(dp[n]!=-1)
            return dp[n];
        //step3
        dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        //step1
        int n=cost.size();
        vector<int>dp(n,-1);
        return min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    }
};