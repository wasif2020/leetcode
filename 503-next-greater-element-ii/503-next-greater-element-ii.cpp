class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v;
        stack<int>s;
        int n=nums.size();
        if(n==1){
            v.push_back(-1);
            return v;
        }
            for(int i=n-2;i>=0; i--)
                s.push(nums[i]);
        for(int i=n-1; i>=0; i--){
            while(s.empty()==false and nums[i]>=s.top())
                s.pop();
            int val=(s.empty()?-1:s.top());
            v.push_back(val);
            s.push(nums[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};