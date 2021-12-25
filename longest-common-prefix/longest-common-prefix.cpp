class Solution {
public:
     string commonpre(string a, string b){
         int si=min(a.size(),b.size());
         string s="";
         for(int i=0; i<si; i++){
             if(a[i]==b[i])
                 s=s+a[i];
             else
                 break;
         }
         return s;
     }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        string s=commonpre(strs[0],strs[1]);
        for(int i=2; i<strs.size(); i++){
            s=commonpre(s,strs[i]);
            if(s=="")
                break;
        }
        return s;
    }
};