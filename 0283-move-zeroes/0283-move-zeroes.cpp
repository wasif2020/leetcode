class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //using the concept of count;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[count++],nums[i]);
            }
        }
    }
};