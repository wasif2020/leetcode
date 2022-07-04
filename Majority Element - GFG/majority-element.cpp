// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int candidate(int a[], int size){
        int count=1;
        int inx=0;
        for(int i=1; i<size; i++){
            if(a[inx]==a[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                inx=i;
                count=1;
            }
        }
        return a[inx];
    }
    int majorityElement(int a[], int size)
    {
     int can=candidate(a,size);
     int count=0;
     for(int i=0;i<size; i++){
         if(a[i]==can){
             count++;
         }
     }
     if(count>(size/2)){
         return can;
     }
return -1;        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends