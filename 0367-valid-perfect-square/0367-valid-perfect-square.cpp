class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int x=1;
        
        while(x*x<=num){
            if(x*x==num) return true;
            x++;
        }
        return false;
    }
};