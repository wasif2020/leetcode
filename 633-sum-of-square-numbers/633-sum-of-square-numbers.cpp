class Solution {
public:
   
    bool judgeSquareSum(int c) {
     long long int low=0, high=sqrt(c);
        if(c==0)
            return true;
        while(low<=high){
            
            if((low*low)+(high*high)==c)
                return true;
            else if((low*low)+(high*high)>c)
                high--;
            else
                low++;
        }
        return false;
    }
};