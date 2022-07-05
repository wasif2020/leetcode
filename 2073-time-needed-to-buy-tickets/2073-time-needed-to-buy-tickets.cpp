class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size(); i++){
            q.push(i);
        }
        int count=0;
        while(q.empty()==false){
            count++;
            int temp=q.front();
            q.pop();
            if(tickets[temp]>=1)
                tickets[temp]-=1;
            if(temp!=k and tickets[temp]==0)
                continue;
            if(temp==k and tickets[temp]==0)
                break;
            
            q.push(temp);
        }
        return count;
    }
};