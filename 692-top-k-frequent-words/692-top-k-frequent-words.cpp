struct cmp{
  bool operator()(pair<string,int>p1,pair<string,int>p2){
      if(p1.second==p2.second)
          return p1.first>p2.first;
      return p1.second<p2.second;
  }   
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>m;
        for(int i=0; i<words.size(); i++){
            m[words[i]]++;
        }
         priority_queue<pair<string,int>,vector<pair<string,int>>,cmp>pq(m.begin(),m.end());             vector<string>v;
        for(int i=0; i<k; i++){
            v.push_back(pq.top().first);
            pq.pop();
        }
        return v;
    }
};