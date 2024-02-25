class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n=0;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%6==0){
                sum+=nums[i];
                n++;
            }
        }
        if(n==0) return 0;
        return floor(sum/n);
    }
};