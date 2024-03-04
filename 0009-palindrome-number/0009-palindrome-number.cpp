class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x<=9 and x>=0) return true;
        string str=to_string(x);
        
        int s=0, e=str.size()-1;
        while(s<e){
            if(str[s]!=str[e]) return false;
            s++, e--;
        }
        return true;
        
    }
};