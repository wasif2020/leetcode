class Solution {
public:

    int maxSubarraySumCircular(vector<int>& nums){
        int n=nums.size();
        int ans_max=nums[0];
        int ans_min=nums[0];
        int curr_res_max=nums[0];
        int curr_res_min=nums[0];
        int sum=0;
        if(n==1)
            return nums[0];
        for(int i=1; i<n; i++){
            curr_res_max=max(nums[i],nums[i]+curr_res_max);
            ans_max=max(ans_max,curr_res_max);
            
            curr_res_min=min(nums[i],nums[i]+curr_res_min);
            ans_min=min(ans_min,curr_res_min);
        }
        for(int i=0; i<n;i++){
            sum+=nums[i];
        }
        if(ans_min==sum)
            return ans_max;
        int ans=max(ans_max,sum-ans_min);
        return ans;
    }
};