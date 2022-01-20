struct cmp{
  bool operator()(pair<char,int>p1,pair<char,int>p2){
        if(p1.second==p2.second)
            return p1.first>p2.first;
    return p1.second<p2.second;
    }
};
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
     for(int i=0; i<s.size(); i++)
         m[s[i]]++;
        priority_queue<pair<char,int>,vector<pair<char,int>>,cmp>pq(m.begin(),m.end());
        s.clear();
        while(pq.empty()==false){
            for(int i=0; i<pq.top().second; i++){
                s+=pq.top().first;
            }
            pq.pop();
        }
        return s;
    }
};