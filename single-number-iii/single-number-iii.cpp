class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        vector<int>v;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1])
                count++;
            else if(count==1)
                v.push_back(nums[i]);
            else
                count=1;
        }
    if(nums[nums.size()-1]!=nums[nums.size()-2])
        v.push_back(nums[nums.size()-1]);
        
     return v;   
    }
};