class Solution {
public:
    int memo[46]={0};
    int climbStairs(int n) {
     // USING TABULATION METHOD
         if(memo[n]==0){
             int res;
             if(n<=2)
                 res=n;
             else 
                 res=climbStairs(n-1)+climbStairs(n-2);
             memo[n]=res;
         }
        return memo[n];
    }
};