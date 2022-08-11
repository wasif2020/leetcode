class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int n1=t.size();
        if(n!=n1)
            return false;
        int m1[256]={0};
        int m2[256]={0};
        for(int i=0; i<n; i++){
            if(m1[s[i]]==0 and m2[t[i]]==0){
                m1[s[i]]=t[i];
                m2[t[i]]=s[i];
            }
            else if(m1[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
};