class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>v;
        string str="";
        for(int i=0; i<s.size(); i=i+k){
            str.clear();
        str=s.substr(i, k);
        if(str.size()<k){
                while(str.size()!=k)
                    str+=fill;
                v.push_back(str);
                break;
            }
            v.push_back(str);
        }
        return v;
    }
};