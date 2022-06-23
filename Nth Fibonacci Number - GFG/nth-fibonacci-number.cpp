// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    long long int nthFibonacci(long long int n){
        long long int tab[n+1];
        tab[0]=0;
        tab[1]=1;
        for(long long int i=2; i<=n; i++){
            tab[i]=tab[i-1]+tab[i-2];
            tab[i]=tab[i]%1000000007;
            
        }
        return tab[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends