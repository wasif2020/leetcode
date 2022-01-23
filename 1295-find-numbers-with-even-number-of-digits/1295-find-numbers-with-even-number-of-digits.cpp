class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
          int d=floor(log10(nums[i]))+1;
         if(d%2==0)
             count++;
        }
            return count;
    }
};