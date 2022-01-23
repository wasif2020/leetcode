class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m=-1;
        vector<int>v;
        for(int i=arr.size()-1; i>=0; i--){
            if(i==arr.size()-1){
                v.push_back(m);
                m=max(m,arr[i]);
                continue;
            }
            m=max(m,arr[i+1]);
            v.push_back(m);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};