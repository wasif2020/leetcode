class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        int nidx=1;
        int pidx=0;
        for(auto x:nums){
            if(x>0){
                v[pidx]=x;
                pidx+=2;
            }
            else if(x<0){
                v[nidx]=x;
                nidx+=2;
            }
        }
        return v;
        
    }
};