class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(piles.begin(),piles.end());
        for(int i=0; i<k; i++){
            int t=pq.top();
            pq.pop();
            pq.push((t+1)/2);
        }
        int sum=0;
        while(pq.empty()==false){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};