class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto x:m){
            if(x.second==2)
                nums.push_back(x.first);
        }
        return nums;
    }
};