class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        vector<vector<int>>vr;
        for(int i=0; i<k; i++){
            int x=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push({x,i});
        }
     for(int i=k; i<points.size(); i++){
          int x=points[i][0]*points[i][0]+points[i][1]*points[i][1];
          if(pq.top().first>x){
              pq.pop();
              pq.push({x,i});
          }
        }
        while(pq.empty()==false){
            int idx=pq.top().second;
            pq.pop();
            vector<int>v;
            v.push_back(points[idx][0]);
            v.push_back(points[idx][1]);
            vr.push_back(v);
            v.clear();
        }
        return vr;
    }
};