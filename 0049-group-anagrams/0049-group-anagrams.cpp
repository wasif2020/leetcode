class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>s;
        vector<vector<string>>v;
        int n=strs.size();
        if(n==0)
            return v;
        for(int i=0;i<n; i++){
            string x=strs[i];
            sort(x.begin(),x.end());
            s[x].push_back(strs[i]);    
        }
      for(auto x:s){
           v.push_back(x.second);
      }
        return v;
    }
};