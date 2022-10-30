class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums1.begin(),nums1.end());
        vector<int>v;
        unordered_set<int>p;
        for(auto x: nums2){
            if(s.find(x)!=s.end() and p.find(x)==p.end())
               v.push_back(x);
            p.insert(x);
        }
        return v;
    }
};