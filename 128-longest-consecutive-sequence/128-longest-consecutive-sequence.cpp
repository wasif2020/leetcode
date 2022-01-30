class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1)
            return 0;
        unordered_set<int>h(nums.begin(),nums.end());
        int res=1;
        for(auto x:h){
            if(h.find(x-1)==h.end()){
                int curr=1;
                while(h.find(x+curr)!=h.end())
                    curr++;
                
            res=max(res,curr);
            } 
        }
        return res;
    }
};