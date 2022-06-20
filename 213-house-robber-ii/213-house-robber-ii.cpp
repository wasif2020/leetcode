class Solution {
public:
    int call(vector<int>nums,int start,int end,bool check)
    {
        if(check)  nums[1] = max(nums[0],nums[1]);
        else nums[2] = max(nums[2],nums[1]);
        for(int i=2;i<=end;i++)
        {
            if(check) nums[i] = max(nums[i-1],nums[i]+nums[i-2]);
            else{
                if((i-2)>0) nums[i] = max(nums[i-1],nums[i]+nums[i-2]);
            }
        }
        return nums[end];
    }
    int rob(vector<int>& nums) {
        int n(nums.size());
        if(n == 1)
        {
            return nums[0];
        }
        if(n == 2)
        {
            return max(nums[0],nums[1]);
        }
        return max(call(nums,0,n-2,true),call(nums,1,n-1,false));
        
        
    }
};