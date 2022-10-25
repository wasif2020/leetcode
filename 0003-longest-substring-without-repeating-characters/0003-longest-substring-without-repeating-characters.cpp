class Solution {
public:
bool distinct(string s,int start,int end){
    unordered_set<int>set;
    for(int i=start; i<=end; i++){
        if(set.find(s[i])!=set.end())
            return false;
        set.insert(s[i]);
    }
    return true;
}
    int lengthOfLongestSubstring(string s) {
       /* first solution
       int n=s.size();
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int flag=distinct(s,i,j);
                if(flag) ans=max(ans,j-i+1);
            }
        }
        return ans;
        //solution 2
        int ans=0;
        for(int i=0; i<s.size(); i++){
            vector<bool>v(256,false);
            for(int j=i; j<s.size(); j++){
                if(v[s[j]]==true)
                    break;
                else{
                    ans=max(ans,j-i+1);
                    v[s[j]]=true;
                }
            }
        }
        return ans; */
        vector<int>prev(256,-1);
        int ans=0;
        int i=0;
        for(int j=0; j<s.size(); j++){
            i=max(i,prev[s[j]]+1);
            ans=max(ans,j-i+1);
            prev[s[j]]=j;
        }
        return ans;
    }
};