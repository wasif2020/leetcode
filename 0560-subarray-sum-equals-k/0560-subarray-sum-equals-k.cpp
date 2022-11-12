class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int>m;
        int presum=0;
        for(auto x:nums){
            presum+=x;
            if(presum==k){
                count++;
            }
            if(m.find(presum-k)!=m.end()){
                count+=m[presum-k];
            }
            m[presum]++;
        }
        return count;
    }
};