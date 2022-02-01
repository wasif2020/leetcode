class Solution {
public:
    int countOdds(int low, int high) {
        int l=(low+1)/2;
        int h=(high+1)/2;
        int res=h-l;
        if(low%2==1)
            res++;
        return res;
    }
};