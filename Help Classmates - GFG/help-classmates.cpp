// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        vector<int>v;
        stack<int>s;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2; i>=0; i--){
            while(s.empty()==false and arr[i]<=s.top()){
                s.pop();
            }
            int h=(s.empty()?-1:s.top());
            v.push_back(h);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends