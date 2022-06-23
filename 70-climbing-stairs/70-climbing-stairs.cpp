class Solution {
public:
    int climbStairs(int n) {
     // USING TABULATION METHOD
         if(n<=2)
             return n;
        int tab[n+1];
        tab[1]=1;
        tab[2]=2;
        for(int i=3; i<=n; i++)
            tab[i]=tab[i-1]+tab[i-2];
        return tab[n];
    }
};