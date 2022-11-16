class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int>v;
        int str=-1;
        int end=-1;
        int n=nums.size();
        if(n==0){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        int s=0;
        int e=n-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                str=m;
                end=m;
                break;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        int idx=str;
        for(int i=str-1; i>=0; i--){
            if(nums[i]==target){
                str--;
            }
            else{
                break;
            }
        }
        for(int i=end+1; i<n; i++){
            if(nums[i]==target){
                end++;
            }
            else{
                break;
            }
        }
        v.push_back(str);
        v.push_back(end);
        return v;
    }
};