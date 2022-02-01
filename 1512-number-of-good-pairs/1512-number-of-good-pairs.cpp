class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        int res=0;
        for(auto x:m){
            int n=x.second;
            if(n>1)
                res+=(n*(n-1))/2;
        }
        return res;
    }
};