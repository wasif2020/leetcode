class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>m;
        unordered_set<int>s(arr2.begin(),arr2.end());
        vector<int>v;
        vector<int>v1;
        for(auto x:arr1){
            if(s.find(x)==s.end()){
                v1.push_back(x);
                continue;
            }
            m[x]++;
        }
        for(auto x:arr2){
            auto it=m.find(x);
            for(int i=0; i<it->second; i++){
                v.push_back(x);
            }
        }
        sort(v1.begin(),v1.end());
        for(auto x:v1){
            v.push_back(x);
        }
        return v;
    }
};