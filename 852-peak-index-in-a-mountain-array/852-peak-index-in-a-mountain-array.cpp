class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=0;
        while(s<=e){
            mid=(s+e)/2;
            if(mid==0)
                return mid+1;
            if(mid==arr.size()-1)
                return mid-1;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                 return mid;
            }
            else if(arr[mid]<arr[mid-1])
                e=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
};