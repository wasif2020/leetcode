class Solution {
public:
    bool isArithmetic(vector<int>&nums,int s, int e){
        vector<int>vres(nums);
         sort(vres.begin()+s,vres.begin()+e+1);
        int d=abs(vres[s+1]-vres[s]);
        for(int i=s; i<e; i++)
            if(abs(vres[i+1]-vres[i])!=d)
                return false;
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>res;
        for(int i=0; i<l.size(); i++){
            res.push_back(isArithmetic(nums,l[i],r[i]));
               
        }
        return res;
    }
};