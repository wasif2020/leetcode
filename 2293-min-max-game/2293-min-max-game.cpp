class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        vector<int>v;
        v=nums;
        nums.clear();
        while(v.size()>1){
          bool up=true;
        for(int i=0; i<v.size()-1; i=i+2){
            if(up){
            int s=min(v[i],v[i+1]);
             nums.push_back(s);    
            }
            else{
             int s=max(v[i],v[i+1]);
             nums.push_back(s);       
            }
            up=!up;
        }
            v.clear();
            v=nums;
            nums.clear();
        }
        return v[0];
    }
};