class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        int res=m[s[s.size()-1]];
        for(int i=s.size()-2; i>=0; i--){
            if(m[s[i]]>=m[s[i+1]])
                res=res+m[s[i]];
            else
                res=res-m[s[i]];
        }
        return res;
    }
};