class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>v;
        v=arr;
        int n=arr.size();
        arr.clear();
        int s=0;
        for(int i=0; i<n; i++){
            if(s==n)
                return;
            if(v[i]==0 && s+1<n){
                arr.push_back(v[i]);
                arr.push_back(v[i]);
                s+=2;
            }
            else{
                arr.push_back(v[i]);
                s++;
            }

        }
    }
};