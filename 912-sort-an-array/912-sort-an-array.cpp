class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        multiset<int>s(nums.begin(),nums.end());
        nums.clear();
        for(auto x:s)
            nums.push_back(x);
        return nums;
            
    }
};