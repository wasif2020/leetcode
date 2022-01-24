class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        multiset<int>s(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0 && s.count(arr[i])<2){
                continue;
            }
            if(s.find(arr[i]*2)!=s.end())
                return true;
        }
        return false;
    }
};