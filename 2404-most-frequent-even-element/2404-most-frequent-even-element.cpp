class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums) 
            if(x%2==0)
                mp[x]++;
    int count=0;
    int res=-1;
    for(auto x:mp){
        if(x.second>=count){
            if(x.second==count){
                res=min(res,x.first);
                continue;
            }
            res=x.first;
            count=x.second;
        }
    }
        return res;
    }
};