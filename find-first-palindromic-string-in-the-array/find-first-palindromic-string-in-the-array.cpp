class Solution {
public:
    bool palin(string &s){
        int st=0;
        int e=s.size()-1;
        while(st<e){
            if(s[st]!=s[e])
                return false;
            else{
                st++;
                e--;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int si=words.size();
        for(int i=0; i<si; i++){
            if(palin(words[i]))
                return words[i];
        }
        return "";
    }
};