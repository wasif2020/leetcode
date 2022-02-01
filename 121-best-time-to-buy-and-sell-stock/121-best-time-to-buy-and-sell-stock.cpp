class Solution {
public:
    int maxProfit(vector<int>&nums) {
          if(nums.size()<=1){
            return 0;
        }
        int res=nums[1]-nums[0];
        int minim=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>minim){
                res=max(res,nums[i]-minim);
            }
            else{
                minim=min(minim,nums[i]);
            }
        }
        if(res<=0){
            return 0;
        }
        return res;
    }
};