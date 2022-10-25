//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string cmp(string s, string t){
        string res="";
        int n=min(s.size(),t.size());
        for(int i=0;i<n;i++){
            if(s[i]==t[i]){
                res+=s[i];
            }
            else{
                break;
            }
        }
        if(res==""){
            return "-1";
        }
        return res;
    }
    string longestCommonPrefix (string arr[], int N)
    {
        if(N==1){
            return arr[0];
        }
      string str=arr[0];
      for(int i=1; i<N; i++){
          str=cmp(str,arr[i]);
          if(str=="-1")
          {
              return "-1";
          }
      }
      return str;
      
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends