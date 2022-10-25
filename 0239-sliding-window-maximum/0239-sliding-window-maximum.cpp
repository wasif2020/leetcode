class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      vector<int>v;
     /*brute force solution
     for(int i=0; i<n-k+1; i++){
         int ans=arr[i];
         int x=i;
         for(int j=i; j<x+k; j++){
             ans=max(ans,arr[j]);
         }
         v.push_back(ans);
     }
     return v;
        */
        
        //priority queue solution
        deque<int>q(k);
        for(int i=0;i<k; i++){
            while(!q.empty() and nums[i]>q.back()){
                q.pop_back();
            }
            q.push_back(nums[i]);
        }
        v.push_back(q.front());
        for(int i=k; i<nums.size(); i++){
            int x=q.front();
            if(nums[i-k]==q.front())
                q.pop_front();
            while(!q.empty() and nums[i]>q.back()){
                q.pop_back();
            }
            q.push_back(nums[i]);
            v.push_back(q.front());
            
        }
        return v;
    }
};