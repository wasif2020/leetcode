class Solution {
public:
    vector<int>v;
    vector<int>r;
    Solution(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            v.push_back(nums[i]);
            r.push_back(nums[i]);
        }
    }
    
    vector<int> reset() {
        return r;
    }
    vector<int> shuffle() {
       random_shuffle(v.begin(),v.end());
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */