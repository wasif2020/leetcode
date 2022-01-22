class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for(auto it=nums.begin(); it!=nums.end(); it++){
          auto pos=find(it+1,nums.end(),*it);
            if(pos!=nums.end())
                return *pos;
        }
        return -1;
    }
};