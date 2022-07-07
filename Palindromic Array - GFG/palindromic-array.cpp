// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
   bool palindrome(int n){
       string s=to_string(n);
       int i=0;
       int len=s.size()-1;
       while(i<len){
           if(s[i]!=s[len]){
               return false;
           }
           i++;
           len--;
       }
       return true;
   }
    int PalinArray(int a[], int n)
    {
    	for(int i=0; i<n; i++){
    	    if(palindrome(a[i])==false){
    	        return false;
    	    }
    	}
    	return true;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends