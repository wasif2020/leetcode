class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int m=left;
        int n=right;
        if(m==n)
            return m;
        int count=0;
        if(m==0 or n==0)
            return 0;
        while(m!=n){
            m=m>>1;
            n=n>>1;
            count++;
        }
        return m<<count;
        
    }
};