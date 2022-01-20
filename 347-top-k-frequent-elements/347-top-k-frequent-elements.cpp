struct cmp{
  bool operator()(pair<int,int>p1,pair<int,int>p2){
        if(p1.second==p2.second)
            return p1.first>p2.first;
    return p1.second<p2.second;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>,cmp>pq(m.begin(),m.end());
        nums.clear();
        for(int i=0; i<k; i++){
            nums.push_back(pq.top().first);
            pq.pop();
        }
        return nums;
        
    }
};