class Solution {
public:
    //tabulation || TLE
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0; i<n; i++){
               if(res>=i)
                   res=max(res,i+nums[i]);
              if(res>=n-1)
                  return true;
        }
        return false;
    }
};