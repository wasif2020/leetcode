class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[count-1]){
                nums[count++]=nums[i];
            }
        }
        return count;
    }
};