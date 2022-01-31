class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>v;
        vector<int>v1;
        if(s.size()<3)
            return v;
        int count=1;
        for(int i=0; i<s.size()-1; i++){
             if(s[i]==s[i+1]){
                count++;
            }  
           if(s[i]!=s[i+1]){
                if(count>2){
                    v1.push_back(i-count+1);
                    v1.push_back(i); 
                    v.push_back(v1);
                    v1.clear();
                }
                count=1;
            }
          
        }
        if(count>2){
            v1.push_back(s.size()-count);
            v1.push_back(s.size()-1);
            v.push_back(v1);
        }
        return v;
    }
};