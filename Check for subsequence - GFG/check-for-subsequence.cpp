//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int s1=0;
        int s2=0;
        int n1=A.size();
        int n2=B.size();
        while(s1<n1 and s2<n2){
            if(A[s1]==B[s2]){
                s1++;
                s2++;
            }
            else{
                s2++;
            }
        }
        if(s1==n1){
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends