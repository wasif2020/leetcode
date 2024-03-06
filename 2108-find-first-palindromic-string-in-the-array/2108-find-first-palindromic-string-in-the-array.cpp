class Solution {
public:
    bool palindrome(string s){
        int start=0,end=s.size()-1;
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++,end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto s:words) if(palindrome(s)) return s;
        return "";   
    }
};