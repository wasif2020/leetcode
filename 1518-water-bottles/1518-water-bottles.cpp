class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ebot=numBottles;
        int carry=0;
        int res=numBottles;
        while(ebot>=numExchange){
            res+=numBottles/numExchange;
            ebot=numBottles%numExchange+numBottles/numExchange;
           numBottles=(numBottles/numExchange)+numBottles%numExchange;
        }
        return res;
    }
};