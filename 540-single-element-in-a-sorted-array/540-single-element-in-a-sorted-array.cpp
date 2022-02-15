class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        if(nums.size()==1)
            return nums[0];
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid==0 or mid==nums.size()-1)
                return nums[mid];
            if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1])
                return nums[mid];
            else if(nums[mid]==nums[mid-1]){
                if(mid%2==0)
                    high=mid-1;
                else
                    low=mid+1;
            }
            else{
                if(mid%2==0)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return-1;
    }
};