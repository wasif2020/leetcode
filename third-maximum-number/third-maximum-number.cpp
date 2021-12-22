class Solution {
public:
    int thirdMax(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int count=1;
        int i=nums.size()-1;
        while(count!=3){
            if(i>0){
                if(nums[i]>nums[i-1]){
                    count++;
                    i--;
                }
                else{
                    i--;
                }
            }
              if(i==0 && count!=3){
                    return nums[nums.size()-1];
                }
        }
        return nums[i];
    }
};