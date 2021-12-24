class Solution {
public:
    bool squareIsWhite(string c) {
        int i=c[0]-'a';
        int j=c[1]-'0';
        if((i+j)%2==0)
            return true;
        return false;
    }
};