class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),count=1,digitCount=1;
        
        for(int i=1; i<n; i++){
            if(nums[i]==nums[count-1] and digitCount!=2){
                swap(nums[i],nums[count++]);
                digitCount++;
            }
            else if(nums[i]!=nums[count-1]){
                swap(nums[i],nums[count++]);
                digitCount=1;
            }
        }
        return count;
    }
};