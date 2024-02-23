class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), maxProfit=0;
        int minVal=prices[0];
        for(int i=1; i<n; i++){
            maxProfit=max(maxProfit,prices[i]-minVal);
            minVal=min(minVal,prices[i]);
        }
        return maxProfit;
        
    }
};