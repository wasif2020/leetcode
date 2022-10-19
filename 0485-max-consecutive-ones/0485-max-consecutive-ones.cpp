class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==0)
                return 0;
            else 
                return 1;
        }
        
        int count=1;
        int res=INT_MIN;
        bool flag=false;
        for(int i=1; i<n;i++){
            if(nums[i]==1 or nums[i-1]==1)
                flag=true;
            
            if(nums[i-1]==nums[i] and nums[i]==1)
                count++;
            else{
                res=max(res,count);
                count=1;
            }
        }
        res=max(res,count);
        if(flag==false)
            return 0;   
        return res;
    }
};