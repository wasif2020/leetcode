class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>v;
        unordered_set<int>s1(nums1.begin(),nums1.end());
         unordered_set<int>s2(nums2.begin(),nums2.end());
         unordered_set<int>s3(nums3.begin(),nums3.end());
        for(auto x:s2){
            if(s1.find(x)!=s1.end()){
                v.push_back(x);
                s1.erase(x);
                continue;
            }
            s1.insert(x);
        }
        for(auto x:s3){
            if(s1.find(x)!=s1.end()){
                v.push_back(x);
                s1.erase(x);
                continue;
            }
            s1.insert(x);
        }
        return v;
    }
};