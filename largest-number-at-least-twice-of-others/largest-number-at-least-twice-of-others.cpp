class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int index;
        sort(v.begin(),v.end());
        int m=v[v.size()-1];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==m){
                index=i;
            }
            else{
                if(nums[i]*2>m)
                    return -1;
            }
        }
        return index;
    }
};