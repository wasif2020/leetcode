class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0; i<s.size(); i=i+2*k){
            auto it=s.begin()+i;
            if(s.size()-i<k){
                reverse(it,s.end());
                break;
            }
            reverse(it,it+k);
        }
        return s;
    }
};