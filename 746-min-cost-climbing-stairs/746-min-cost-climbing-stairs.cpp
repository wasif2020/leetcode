class Solution {
public:
    int res=0;
    int mincost(vector<int>&cost,int n, vector<int>&dp){
        if(n==0)
            dp[n]=cost[0];
        if(n==1)
            dp[n]=cost[1];
        if(dp[n]==-1){
             res=cost[n]+min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
             dp[n]=res;
        }
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
           int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
    }
};