class Solution {
public:
    bool palindrome(string str){
        if(str.size()==0) return true;
        int start=0,end=str.size()-1;
        while(start<end){
            if(str[start]!=str[end])
                return false;
            start++,end--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string str="";
        for(auto x:s){
            int val=(int)x;
            if(val>=48 and val<=57)
                str+=x;
            else if(val>=65 and val<=90)
                str+=tolower(x);
            else if(val>=97 and val<=122)
                str+=tolower(x);
        } 

        if(palindrome(str)) return true;
        return false;
    }
};