// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int>v;
    int s=0;
    int e=n-1;
    int ind=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==x){
            ind=mid;
            break;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    if(ind==-1){
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    int right=ind;
    int left=ind;
    while(arr[right]==x){
        right++;
    }
    while(arr[left]==x){
        left--;
    }
    right--;
    left++;
    v.push_back(left);
    v.push_back(right);
    return v;
    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends