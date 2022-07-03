class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        int n=nums2.size();
        for(int i=0; i<nums1.size(); i++){
            m[nums1[i]]=i;
        }
        vector<int>v(nums1.size(),-1);
        if(nums1.size()==1)
            return v;
        stack<int>s;
        s.push(nums2[n-1]);
       for(int i=n-2; i>=0; i--){
           auto it=m.find(nums2[i]);
            while(s.empty()==false and nums2[i]>=s.top())
               s.pop();
           if(it!=m.end()){
            int val=(s.empty()?-1:s.top());
               v[it->second]=val;
              }
            s.push(nums2[i]);

       }
        return v;
    }
};