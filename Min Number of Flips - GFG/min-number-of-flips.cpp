//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    int n=S.size();
    if(n==1){
        return 0;
    }
    char s='0';
    char t='1';
    int ans=INT_MAX;
    int curr=0;
    for(int i=0; i<n; i++){
        if(i%2==0 and S[i]!=s){
            curr++;
        }
        if(i%2==1 and S[i]!=t){
            curr++;
        }
    }
    ans=min(ans,curr);
        curr=0;
    for(int i=0; i<n; i++){
        if(i%2==1 and S[i]!=s){
            curr++;
        }
        if(i%2==0 and S[i]!=t){
            curr++;
        }
    }
    return min(ans,curr);
}