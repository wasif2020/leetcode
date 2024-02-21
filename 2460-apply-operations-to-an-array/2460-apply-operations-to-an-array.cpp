class Solution {
public:
   void removeElement(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=0; i<n; i++)
            if(nums[i]!=0) swap(nums[i],nums[count++]);
    }
    
    vector<int> applyOperations(vector<int>& nums) {
     
        int n=nums.size();
        if(n==1) return nums;
        for(int i=1; i<n; i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]*=2;
                nums[i]=0;
            }
        }
        removeElement(nums);
        return nums;
        
    }
};