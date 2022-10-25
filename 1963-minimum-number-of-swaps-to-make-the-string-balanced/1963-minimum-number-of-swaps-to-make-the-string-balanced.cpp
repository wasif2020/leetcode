class Solution {
public:
    int minSwaps(string s) {
        int ans=0;
        int curr=0;
        for(int i=0; i<s.size(); i++){
            ans=max(ans,curr);
            if(s[i]==']')
                curr++;
            else if(s[i]=='[')
                curr--;
        }
        return (max(ans,curr)+1)/2;
    }
};