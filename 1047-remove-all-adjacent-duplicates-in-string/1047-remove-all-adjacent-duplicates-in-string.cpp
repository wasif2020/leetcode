class Solution {
public:
    string removeDuplicates(string s) {
        int st=0;
        while(st+1<s.size()){
            if(s[st]==s[st+1]){
                s.erase(s.begin()+st,s.begin()+st+2);
                if(st!=0)
                    st=st-1;
                else
                    st=0;
                continue;
            }
            st++;
        }
        return s;
    }
};