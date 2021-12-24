class Solution {
public:
   bool matching(int a,int b){
        return (a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']' );
    }
    bool isValid(string s) {
        stack<int>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty())
                    return false;
                else if(matching(st.top(),s[i])==false){
                    return false;
                }
                else
                    st.pop();
            }
        }
        return st.empty()==true;
    }
};