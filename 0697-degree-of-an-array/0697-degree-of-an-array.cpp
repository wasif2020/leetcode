class Solution {
public:
    int minIdx(int res, vector<int>&nums){
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            if(nums[s]==res and nums[e]==res){
                int ans=e-s+1;
                return ans;
            }
            else if(nums[s]==res){
                e--;
            }
            else{
                s++;
            }
        }
        return INT_MAX;
    }
    int findShortestSubArray(vector<int>& nums){
        unordered_map<int,int>m;
        for(auto x:nums)
            m[x]++;
        int maxf=0;
        vector<int>v;
        for(auto x:m)
            if(x.second>maxf)
                maxf=x.second;
        for(auto x:m)
            if(x.second==maxf)
                v.push_back(x.first);
        int ans=INT_MAX;
        for(int i=0; i<v.size(); i++){
            ans=min(ans,minIdx(v[i],nums));
        }
    
        return ans;    
        }
};