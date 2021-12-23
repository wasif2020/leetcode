class Solution {
public:
    int getSum(int a, int b) {
        if(a==0)
            return b;
        if(b==0)
            return a;
        if(a>0){
        for(int i=1; i<=a; i++)
            b++;
        return b;
        }
        else{
            for(int i=a; i<0; i++)
                b--;
        }
        return b;
        
    }
};