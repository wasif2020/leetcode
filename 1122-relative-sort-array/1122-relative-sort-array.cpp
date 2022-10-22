class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>m;
        unordered_set<int>s;
        for(auto x:arr2)
            s.insert(x);
        for(auto x:arr1)
            m[x]++;
        vector<int>v;
        for(auto x: arr2)
        {
            auto it=m.find(x);
            if(it!=m.end()){
                for(int i=0; i<it->second; i++)
                    v.push_back(x);
            }
        }
        vector<int>vi;
        for(auto x:arr1){
            if(s.find(x)==s.end()){
                    vi.push_back(x);
            }
        }
        sort(vi.begin(),vi.end());
        for(auto x:vi)
            v.push_back(x);
        return v;
    }
};