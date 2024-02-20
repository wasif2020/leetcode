class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MIN;
        int posSum=0,negSum=0;
        
        for(int i=0; i<n; i++){
            posSum+=nums[i];
            negSum+=nums[i];
            if(posSum<=0) posSum=0;
            if(negSum>0) negSum=0;
            res=max(res,max(abs(negSum),posSum));
        }
        return res;
        
    }
};