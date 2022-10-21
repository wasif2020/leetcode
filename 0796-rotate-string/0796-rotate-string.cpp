class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        s=s+s;
        auto it=s.find(goal);
        if(it!=string::npos)
            return true;
        return false;
    }
};