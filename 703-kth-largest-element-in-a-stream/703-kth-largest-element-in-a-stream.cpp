class KthLargest {
public:
     priority_queue<int,vector<int>,greater<int>>pq;  
    int s;
    KthLargest(int k, vector<int>& nums) {
        s=k;
        if(nums.size()<k)
            for(int i=0; i<nums.size(); i++)
                   pq.push(nums[i]);
        else
            for(int i=0; i<k; i++)
                   pq.push(nums[i]);
        for(int i=k; i<nums.size(); i++){
               if(nums[i]>pq.top()){
                   pq.pop();
                   pq.push(nums[i]);
               }
        }
    }
    int add(int val) {
        if(pq.size()<s)
            pq.push(val);
        else{
            if(val>pq.top()){
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */