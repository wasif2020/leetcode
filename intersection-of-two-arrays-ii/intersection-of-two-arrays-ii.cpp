class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>s(nums1.begin(),nums1.end());
        vector<int>v;
        for(int i=0; i<nums2.size(); i++){
               auto it=s.find(nums2[i]);
            if(it!=s.end()){
                v.push_back(nums2[i]);
                s.erase(it);
            }
        }
        return v;
    }
};