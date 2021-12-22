class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[j]){
                v.push_back(nums[j]);
                j++;
            }
            else{
                j++;
            }
        }
        return v;
    }
};