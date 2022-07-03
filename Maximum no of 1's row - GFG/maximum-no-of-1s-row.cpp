// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int res=0;
            int r=-1;
            int inx=-1;
            for(int i=0; i<N; i++){
                int s=0;
                int e=M-1;
                while(s<=e){
                    int mid=(s+e)/2;
                    if(Mat[i][mid]){
                        inx=mid;
                        e=mid-1;
                    }
                    else{
                        s=mid+1;
                    }
                }
                if(res<(M-inx)){
                    res=max(res,M-inx);
                    r=i;
                }
                
            }
            return r;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends