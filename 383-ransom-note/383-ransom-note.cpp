class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(auto x:magazine){
            m[x]++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            auto it=m.find(ransomNote[i]);
            if(it!=m.end() and it->second!=0){
                m[ransomNote[i]]--;
            }
            else
                return false;
        }
        return true;
    }
};