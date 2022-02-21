// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int n1=array1.size();
        int n2=array2.size();
        if(n1==0 and n2==0)
            return 0;
        if(n1==0){
            if(n2%2==0)
                return ((double)(array2[n2/2]+array2[n2/2-1]))/2;
            else 
                return (double)(array2[n2/2]);
        }
        if(n2==0){
            if(n1%2==0)
                return ((double)(array1[n1/2]+array1[n1/2-1]))/2;
            else 
                return (double)(array1[n1/2]);
        }
        int low,high;
        if(n1<n2){
            low=0;
            high=n1;
        while(low<=high){
            int i1=(low+high)/2;
            int i2=(n1+n2+1)/2-i1;
            int MAX1=(i1==0)?INT_MIN:array1[i1-1];
            int MIN1=(i1==n1)?INT_MAX:array1[i1];
            int MAX2=(i2==0)?INT_MIN:array2[i2-1];
            int MIN2=(i2==n2)?INT_MAX:array2[i2];
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
            int MAX1=(i1==0)?INT_MIN:array2[i1-1];
            int MIN1=(i1==n2)?INT_MAX:array2[i1];
            int MAX2=(i2==0)?INT_MIN:array1[i2-1];
            int MIN2=(i2==n1)?INT_MAX:array1[i2];
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

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends