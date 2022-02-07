class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int res=0;
        for(int i=0; i<n; i++){
            res=res^s[i]^t[i];
        }
        res=res^t[n];
        return (char)res;
    }
};