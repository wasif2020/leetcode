class Solution {
public:
     string cmp(string s, string t){
        string res="";
        int n=min(s.size(),t.size());
        for(int i=0;i<n;i++){
            if(s[i]==t[i]){
                res+=s[i];
            }
            else{
                break;
            }
        }
        if(res==""){
            return "-1";
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1)
            return strs[0];
        string str=strs[0];
        for(int i=1;i<n;i++){
            str=cmp(str,strs[i]);
                if(str=="-1")
                    return "";
        }
        return str;
    }
};