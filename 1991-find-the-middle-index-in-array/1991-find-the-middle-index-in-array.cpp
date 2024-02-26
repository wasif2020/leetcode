class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int lsum=0, rsum=0;
        for(int i=0;i<n; i++)
            rsum+=nums[i];
        
        for(int i=0;i<n; i++){
            rsum=rsum-nums[i];
            if(lsum==rsum) return i;
            lsum=lsum+nums[i];
        }
        
        return -1;
    }
};