class Solution {
public:
    bool solve(vector<int>&arr, int start,int n,vector<bool>&dp){
        if(start<0 or start>=n)
            return false;
        if(arr[start]==0)
            return true;
        if(dp[start]==true) return false;
        dp[start]=true;
        return solve(arr,start+arr[start],n,dp)|| solve(arr,start-arr[start],n,dp);
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<bool>dp(n+1,false);
        return solve(arr,start,n,dp);
        
    }
};