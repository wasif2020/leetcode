class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2);
        res[0]=-1;
        res[1]=-1;
        int n=nums.size();
        if(n==0) return res;
        int mid,left,right;
        int start=0,end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target) {
                left=mid;
                break;
            }
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
        }
        if(start>end) return res;
        right=left;
        while(left>=0 and nums[left]==target) res[0]=left--;
        while(right<n and nums[right]==target) res[1]=right++;
        
        return res;
    }
};