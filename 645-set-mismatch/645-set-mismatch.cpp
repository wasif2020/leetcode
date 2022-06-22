class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
          vector<int>v;
        int n=nums.size();
         unordered_map<int,int>m;
        for(auto x:nums)
            m[x]++;
        int f,s;
        for(int i=1; i<=n; i++){
            auto it=m.find(i);
            if(it!=m.end() && it->second==2)
                f=i;
            else if(it==m.end())
                s=i;
        }
        v.push_back(f);
        v.push_back(s);
        return v;
        
    }
};