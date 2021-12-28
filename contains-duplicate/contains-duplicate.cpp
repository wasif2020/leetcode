class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        multiset<int>s(nums.begin(),nums.end());
        for(auto it=s.begin(); it!=s.end(); it++){
            if(s.count(*it)>1)
               return true;;
        }
               return false;
    }
};