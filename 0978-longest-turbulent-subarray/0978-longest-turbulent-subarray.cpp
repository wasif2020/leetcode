class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int count=2;
        int res=0;
        unordered_set<int>s(arr.begin(),arr.end());
        if(s.size()==1)
            return 1;
        int n=arr.size();
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        bool flag=(arr[0]>arr[1] and arr[1]<arr[2]);
        for(int i=1; i<n-1; i++){
            if(count==2){
                flag=(arr[i-1]>arr[i] and arr[i]<arr[i+1]);
            }
            if((arr[i-1]>arr[i] and arr[i]<arr[i+1] and flag) or (arr[i-1]<arr[i] and arr[i]>arr[i+1] and !flag)){
                count++;
                flag=!flag;
            }
            else{
                res=max(res,count);
                count=2;
            }
        }
        res=max(res,count);
        return res;
    }
};