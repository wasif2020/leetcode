class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int>m(nums.begin(),nums.end());
        auto it=m.begin();
        advance(it,nums.size()-k);
        return *it;
    }
};