class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n=s.size();
        int d=0;
        int idx=0;
        int x=0;
        bool visited[26]={false};
        for(int i=0; i<n-1; i++){
            d=0;
            x=(s[i]-'a');
            if(visited[x]==false){
                 idx=s.find(s[i],i+1);
                 d=(idx-i-1);
                 if(distance[x]!=d)
                      return false;
            }
            visited[x]=true;
        }
        return true;
    }
};