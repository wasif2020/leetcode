class Solution {
public:
    void reverse(string &s,int st,int en){
        while(st<=en){
            swap(s[st++],s[en--]);
        }
    }
    string reverseWords(string s) {
        int n=s.size();
        string str="";
        int st=0;
        int en=n-1;
        while(s[st]==' ')
            st++;
        while(s[en]==' ')
            en--;
        int count=0;
        for(int i=st; i<=en; i++){
            if(s[i]==' '){
                count++;
                if(count>=2){
                    continue;
                }
                str+=s[i];
            }
            if(s[i]!=' '){
                str+=s[i];
                count=0;
            }
        }
        st=0;
        auto it=str.find(' ');
        while(it!=string::npos){
            reverse(str,st,it-1);
            st=it+1;
            it=str.find(' ',it+1);
        }
        reverse(str,st,str.size()-1);
        reverse(str,0,str.size()-1);
        s=str;
        
        return s;
    }
};