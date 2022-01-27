class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0; i<k; i++)
            sum+=nums[i];
        double mav=sum/k;
        for(int i=k; i<nums.size(); i++){
            sum=(sum-nums[i-k])+nums[i];
            mav=max(mav,sum/k);
        }
        return mav;
    }
};