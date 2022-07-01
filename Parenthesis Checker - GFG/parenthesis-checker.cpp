// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    bool match(char a, char b){
        return ((a=='(' and b==')') or (a=='{' and b=='}') or (a=='[' and b==']'));
    }
    bool ispar(string x)
    {
       stack<int>s;
       for(int i=0; i<x.size(); i++){
           if(x[i]=='(' or x[i]=='{' or x[i]=='['){
               s.push(x[i]);
           }
           else{
               if(s.empty()==true){
                   return false;
               }
           else if(match(s.top(),x[i])==false){
               return false;
           }
           else {
               s.pop();
           }
           }
       }
       if(s.empty()==false){
           return false;
       }
       return true;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends