class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>v;
        int count[1001]={0};
        for(int i=0; i<nums.size(); i++){
            for(auto x: nums[i])
                 count[x]++;
        }
        for(int i=0; i<nums[0].size(); i++){
            if(count[nums[0][i]]==nums.size())
                v.push_back(nums[0][i]);
        }
        sort(v.begin(),v.end());
        return v;
    }
};