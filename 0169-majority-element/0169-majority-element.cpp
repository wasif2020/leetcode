class Solution {
public:
    int majority(vector<int>&nums){
        int n=nums.size();
        int count=1,res=0;
        for(int i=1; i<n; i++){
            if(nums[res]==nums[i])
                count++;
            else
                count--;
            if(count==0){
                res=i;
                count=1;
            }
        }
        return nums[res];
    }
    int majorityElement(vector<int>& nums) {
     /*
     solution 1
     unordered_map<int,int>m;
            int n=nums.size();
            for(auto x:nums)
                m[x]++;
        for(auto x:m)
            if(x.second>n/2)
                return x.first;
        
        return -1;*/
        
        //better solution | without using extra space;
        //step 1 find which is majority element;
        //step 2 verify if found element is majority or not;
        int maj=majority(nums);
        int count=0;
        int n=nums.size();
        for(auto x:nums)
            if(x==maj)
                count++;
        if(count>n/2)
            return maj;
        return -1;
    }
};