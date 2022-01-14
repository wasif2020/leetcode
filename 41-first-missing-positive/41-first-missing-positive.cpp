class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
       auto it=s.rbegin();
int m=nums.size();
        if(m<=*it)
            m=*it;
            
        for(int i=1; i<=m; i++){
            auto pos=s.find(i);
            if(pos==s.end()){
                return i;
            }
        }
        return *it+1;
    }
};