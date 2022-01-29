class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                nums[i]=-1;  
                }
        
        int sum=0;
        unordered_map<int,int>m;
        int res=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum==0)
                res=i+1;
            if(m.find(sum)==m.end())
                m[sum]=i;
            if(m.find(sum)!=m.end())
                res=max(res,i-m[sum]);
        }
        return res;
    }
};