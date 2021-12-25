class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>num;
        int i=0;
        int j=0;
        while(i!=m or j!=n){
            if(i!=m and j!=n){
                if(nums1[i]==nums2[j]){
                    num.push_back(nums1[i]);
                    num.push_back(nums2[j]);
                    i++;
                    j++;
                }
                else if(nums1[i]>nums2[j]){
                    num.push_back(nums2[j]);
                    j++;
                }
                else{
                 num.push_back(nums1[i]);
                    i++; 
                }
            }
            else if(i!=m and j==n){
                 num.push_back(nums1[i]);
                    i++;
            }
            else{
                 num.push_back(nums2[j]);
                    j++;
            }
        }
        int siz=(m+n);
        for(int i=0; i<siz; i++){
            nums1[i]=num[i];
        }
        
    }
};