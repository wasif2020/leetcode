class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m;
        for(int i=0; i<list1.size(); i++){
            m[list1[i]]=i;
        }
        int sum=INT_MAX;
        for(int i=0; i<list2.size(); i++){
            if(m.find(list2[i])!=m.end())
                sum=min(sum,i+m.find(list2[i])->second);
        }
      vector<string>v;
       for(int i=0; i<list2.size(); i++){
            if(m.find(list2[i])!=m.end() and (i+m.find(list2[i])->second)==sum){
                v.push_back(list2[i]);
            }
        }
        return v;
    }
};