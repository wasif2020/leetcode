class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=INT_MIN;
        int n=nums.size();
        int curr_min=nums[0];
        for(int i=1; i<n; i++){
            res=max(res,nums[i]-curr_min);
            curr_min=min(curr_min,nums[i]);
        }
        if(res<=0) return -1;
    
        return res;
    }
};