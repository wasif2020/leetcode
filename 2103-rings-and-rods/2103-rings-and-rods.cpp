class Solution {
public:
    int countPoints(string rings) {
        int count=0;
     for(int i=0; i<=9; i++){
if(rings.find("B"+std::to_string(i))!=string::npos && rings.find("G"+std::to_string(i))!=string::npos && rings.find("R"+std::to_string(i))!=string::npos)
             count++;
     }   
        return count;
    }
};