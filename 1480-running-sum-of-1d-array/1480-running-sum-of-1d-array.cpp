class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int rsum=nums[0];
        for(int i=1; i<nums.size(); i++){
            rsum+=nums[i];
            nums[i]=rsum;
        }
        return nums;
    }
};