class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
            for(int i=0; i<nums.size() and k!=0; i++){
                if(nums[i]<0){
                    nums[i]=-nums[i];
                    k--;
                }
                else if(nums[i]==0){
                    k=0;
                }
                else{
                    break;
                }
            }
        sort(nums.begin(),nums.end());
        k=k%2;
        if(k==1)
            nums[0]=-nums[0];
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++)
            ans+=nums[i];
        return ans;
    }
};