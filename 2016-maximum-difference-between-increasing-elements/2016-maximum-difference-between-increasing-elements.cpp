class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=-1;
        int minimum=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>minimum){
            ans=max(ans,nums[i]-minimum);
            }
            minimum=min(minimum,nums[i]);
        }
        return ans;
    }
};