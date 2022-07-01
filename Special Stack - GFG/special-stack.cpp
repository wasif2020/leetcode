// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


void push(stack<int>& s, int a){
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	return s.size()==0;
}

int pop(stack<int>& s){
	if(s.size()!=0){
	    int p=s.top();
	    s.pop();
	    return p;
	}
	return -1;
}

int getMin(stack<int>& s){
	int min=10000;
	while(s.empty()==false){
	    if(s.top()<min){
	        min=s.top();
	    }
	    s.pop();
	}
	return min;
}