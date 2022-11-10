class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1)
            return 0;
        int max_diff=0;
        int min_so_far=prices[0];
        for(int i=1; i<n;i++){
            max_diff=max(max_diff,prices[i]-min_so_far);
            min_so_far=min(min_so_far,prices[i]);
        }
        return max_diff;
    }
};