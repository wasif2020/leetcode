class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        if(n1==0 and n2==0)
            return 0;
        if(n1==0){
            if(n2%2==0)
                return ((double)(nums2[n2/2]+nums2[n2/2-1]))/2;
            else 
                return (double)(nums2[n2/2]);
        }
        if(n2==0){
            if(n1%2==0)
                return ((double)(nums1[n1/2]+nums1[n1/2-1]))/2;
            else 
                return (double)(nums1[n1/2]);
        }
        int low,high;
        if(n1<n2){
            low=0;
            high=n1;
        while(low<=high){
            int i1=(low+high)/2;
            int i2=(n1+n2+1)/2-i1;
            int MAX1=(i1==0)?INT_MIN:nums1[i1-1];
            int MIN1=(i1==n1)?INT_MAX:nums1[i1];
            int MAX2=(i2==0)?INT_MIN:nums2[i2-1];
            int MIN2=(i2==n2)?INT_MAX:nums2[i2];
            if(MAX1<=MIN2 && MAX2<=MIN1){
                if((n1+n2)%2==0)
                    return (double)((max(MAX1,MAX2)+min(MIN1,MIN2)))/2;
                else
                    return (double)max(MAX1,MAX2);
            }
            else if(MAX1>MIN2)
                high=i1-1;
            else
                low=i1+1;
        }
    }
        else{
            low=0;
            high=n2;
        while(low<=high){
            int i1=(low+high)/2;
            int i2=(n1+n2+1)/2-i1;
            int MAX1=(i1==0)?INT_MIN:nums2[i1-1];
            int MIN1=(i1==n2)?INT_MAX:nums2[i1];
            int MAX2=(i2==0)?INT_MIN:nums1[i2-1];
            int MIN2=(i2==n1)?INT_MAX:nums1[i2];
            if(MAX1<=MIN2 && MAX2<=MIN1){
                if((n1+n2)%2==0)
                    return (double)((max(MAX1,MAX2)+min(MIN1,MIN2)))/2;
                else
                    return (double)max(MAX1,MAX2);
            }
            else if(MAX1>MIN2)
                high=i1-1;
            else
                low=i1+1;
        }
        }
        return 0;
    }
};