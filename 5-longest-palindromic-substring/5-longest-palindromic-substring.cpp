class Solution {
public:
    string longestPalindrome(string s) {
        
         string sres="";
        int n=s.size();
        int resL=n;
        int len=-1;
        int resR=n;
        for(int i=0; i<s.size(); i++){
            int left=i;
            int right=i;
            while(left>=0 and right<n and s[left]==s[right]){
                if(right-left+1>len){
                    resL=left;
                    resR=right;
                    len=right-left+1;
                }
                left--; 
                right++;
            }
            left=i;
            right=i+1;
            while(left>=0 and right<n and s[left]==s[right]){
                if(right-left+1>len){
                    resL=left;
                    resR=right;
                    len=right-left+1;
                }
                left--; 
                right++;
            }
        }
        for(int i=resL; i<=resR; i++){
            sres+=s[i];
        }
        return sres;
        
    }
};