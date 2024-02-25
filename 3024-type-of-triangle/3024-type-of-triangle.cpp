class Solution {
public:
    bool validTriangle(vector<int>nums){
        if(nums[0]+nums[1]<=nums[2] or nums[0]+nums[2]<=nums[1] or nums[1]+nums[2]<=nums[0])
            return false;
        return true;
    }
    string triangleType(vector<int>& nums) {
        if(nums.size()<3 or !validTriangle(nums)) return "none";
        
        if(nums[0]==nums[1] and nums[1]==nums[2]) return "equilateral";
        else if(nums[0]==nums[1] or nums[1]==nums[2] or nums[0]==nums[2]) return "isosceles";
        else return "scalene";
    }
};