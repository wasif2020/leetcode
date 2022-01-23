class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        multiset<int>s(arr.begin(),arr.end());
        int n=arr.size()/4;
        for(auto x:s){
            if(s.count(x)>n){
                n=x;
                break;
            }
        }
        return n;
    }
};