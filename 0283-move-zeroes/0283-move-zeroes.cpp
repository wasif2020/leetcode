class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                int temp=nums[count];
                nums[count++]=nums[i];
                nums[i]=temp;
            }
        }
        
    }
};