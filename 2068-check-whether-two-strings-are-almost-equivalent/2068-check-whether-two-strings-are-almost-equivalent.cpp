class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0; i<word1.size(); i++){
            m1[word1[i]]++;
            m2[word2[i]]++;
        }
        for(auto x:m1){
            if(m2.find(x.first)==m2.end() && x.second>3)
                return false;
            if(m2.find(x.first)!=m2.end() && m2[x.first]-x.second>3)
                return false;

        }
         for(auto x:m2){
            if(m1.find(x.first)==m1.end() && x.second>3)
                return false;
            if(m1.find(x.first)!=m1.end() && m1[x.first]-x.second>3)
                return false;
         }
        return true;
    }
};