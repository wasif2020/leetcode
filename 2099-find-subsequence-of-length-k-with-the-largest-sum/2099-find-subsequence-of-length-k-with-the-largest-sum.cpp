class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
       // min heap to store
        priority_queue<pair<int,int>>pq;
        for(int i=0; i<nums.size(); i++){
            pq.push({nums[i],i});
        } 
        vector<int>index;
        for(int i=0; i<k; i++){
            pair<int,int>x=pq.top();
            index.push_back(x.second);
            pq.pop();
        }
        sort(index.begin(),index.end());
        vector<int>v;
          for(int i=0; i<index.size(); i++){
              v.push_back(nums[index[i]]);
          }
        return v;
    }
};