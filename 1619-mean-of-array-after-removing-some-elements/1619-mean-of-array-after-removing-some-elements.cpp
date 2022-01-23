class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size()/20;
        double sum=0.00000;
        for(int i=n; i<arr.size()-n; i++){
            sum+=arr[i];
        }
        return (sum/(arr.size()-2*n));
    }
};