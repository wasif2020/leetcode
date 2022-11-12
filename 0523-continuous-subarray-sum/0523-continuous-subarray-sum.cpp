class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2)
            return false;
        int presum=0;
        unordered_map<int,int>m;
        for(int i=0; i<n; i++){
        presum+=nums[i];
        int x=presum%k;    
        if(x==0 and i>0)
            return true;
        auto it=m.find(x);
        if(it!=m.end()){
            if((i-it->second)>1){
                return true;
            }
            else{
                continue;
            }
         }
         m[x]=i;
         }
        return false;
     }
};