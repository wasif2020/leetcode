class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int mid=-1;
        int e=nums.size()-1;
        while(s<=e){
            mid=(s+e)/2;
            if(nums[mid]==target)
                break;
            else if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        vector<int>v;
        if(s>e){
              v.push_back(-1);
                v.push_back(-1);
            return v;
        }
        int st=mid;
        int en=mid;
        for(int i=mid; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1])
                en=i+1;
            else
                break;
        }
          for(int i=mid; i>0; i--){
            if(nums[i]==nums[i-1])
                st=i-1;
            else
                break;
        }
                v.push_back(st);
                v.push_back(en);
        return v;
    }
};