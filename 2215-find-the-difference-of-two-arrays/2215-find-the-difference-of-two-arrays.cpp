class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>v;
        vector<int>vi;
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        for(auto x:s1){
            if(s2.find(x)==s2.end()){
                vi.push_back(x);
            }
        }
        v.push_back(vi);
        vi.clear();
    for(auto x:s2){
            if(s1.find(x)==s1.end()){
                vi.push_back(x);
            }
        }
        v.push_back(vi);
        vi.clear();   
        return v;
    }
};