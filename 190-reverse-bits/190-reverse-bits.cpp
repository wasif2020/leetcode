class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        for(int i=0; i<=31; i++){
            if(n&(1<<i))
                res=res+pow(2,31-i);
        }
        return res;
    }
};