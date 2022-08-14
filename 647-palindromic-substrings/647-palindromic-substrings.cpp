class Solution {
public:
    bool palind(string str){
        int s=0;
        int e=str.size()-1;
        while(s<e){
            if(str[s]!=str[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
    int countSubstrings(string s) {
        vector<string>v;
        int n=s.size();
        int count=0;
        for(int i=0; i<n; i++){
            string st="";
            for(int j=i; j<n; j++){
                st+=s[j];
                v.push_back(st);
            }
        }
        for(int i=0; i<v.size(); i++){
            if(palind(v[i])==true)
                count++;
        }
        return count;
    }
};