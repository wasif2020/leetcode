class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>m;
            for(auto x:nums)
                m[x]++;
        int res=INT_MAX;
        int mf=0;
        for(auto x:m){
            if(x.first%2==0 and x.second==mf){
                res=min(x.first,res);
            }
            else if(x.first%2==0 and x.second>mf){
                mf=x.second;
                res=x.first;
            }
        }
        if(res==INT_MAX)
            return -1;
        return res;
    }
};