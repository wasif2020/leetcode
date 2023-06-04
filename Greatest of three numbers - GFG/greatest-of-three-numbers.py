#User function Template for python3

class Solution:
    def greatestOfThree(self,A,B,C):
        if B>A and B>C:
            return B
        if C>A and C>B:
            return C
        return A    
            
        #code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        A,B,C=map(int,input().strip().split(' '))
        ob=Solution()
        print(ob.greatestOfThree(A,B,C))   
# } Driver Code Ends