class Solution {
public:
    char repeatedCharacter(string s) {
        int count[26]={0};
        for(auto x:s){
            count[x-'a']++;
            if(count[x-'a']==2)
                return x;
            
        }
        return ' ';
    }
};