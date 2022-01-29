class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        vector<int>v;
        for(auto x:m){
           if(x.second==1 && m.find(x.first-1)==m.end() && m.find(x.first+1)==m.end())
               v.push_back(x.first);
        }
        return v;
    }
};