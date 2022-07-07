class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>v;
        vector<int>vi;
        v=nums;
        while(v.size()>1){
            for(int i=0; i<v.size()-1; i++){
                int s=(v[i]+v[i+1])%10;
                 vi.push_back(s);
            }
            v.clear();
            v=vi;
            vi.clear();
        }
        return v[0];
    }
};