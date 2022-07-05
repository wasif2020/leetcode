class Solution {
public:
    int solveRec(vector<int>&coins, int amount,vector<int>&dp){
        if(amount==0) return 0;
        if(amount<0) return INT_MAX;
        int mini=INT_MAX;
        if(dp[amount]!=INT_MAX) return dp[amount];
        for(int i=0; i<coins.size(); i++){
            int ans=solveRec(coins,amount-coins[i],dp);
            if(ans!=INT_MAX){
                mini=min(mini,ans+1);
            }
        }
        dp[amount]=mini;
        return mini;
    }
   int solvetab(vector<int>&coins,int amount){
        vector<int>dp(amount+1,INT_MAX);
            dp[0]=0;
       for(int i=1; i<=amount; i++){
           for(int j=0; j<coins.size(); j++){
             if(i-coins[j]>=0 and dp[i-coins[j]]!=INT_MAX){
              dp[i]=min(dp[i],1+dp[i-coins[j]]);
           }
           }
       }
       if(dp[amount]==INT_MAX) return -1;
       return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        //vector<int>dp(amount+1,INT_MAX);
       // int ans=solveRec(coins,amount,dp);
       // if(ans==INT_MAX) return -1;
        return solvetab(coins,amount);
    }
};