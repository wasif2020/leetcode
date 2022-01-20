class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
        nums.clear();
        while(pq.empty()==false){
            nums.push_back(pq.top());
            pq.pop();
        }
        return nums;
            
    }
};