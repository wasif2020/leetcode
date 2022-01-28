class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(mid==s){
                if(nums[mid]>nums[mid+1])
                    return mid;
                else
                    return mid+1;
            }
            if(mid==e){
                 if(nums[mid]>nums[mid-1])
                    return mid;
                else
                    return mid-1;
            }
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]<nums[mid+1])
                s=mid+1;
            else
                e=mid-1;
                
        }
        return -1;
    }
};