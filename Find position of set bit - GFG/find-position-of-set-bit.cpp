// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  int sqr(int n){
      int count=0;
      if(n==1 or n==2)
            return n;
      while(n!=1){
          if(n%2!=0){
             return -1;
          }
           n=n/2;
           count++;
  }
  return count+1;
  }
    int findPosition(int N) {
        if(N==0){
            return -1;
        }
        return sqr(N);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends