class Solution {
public:
    int findComplement(int num) {
        int com[32]={0};
        int sum=0;
        int i=0;
        while(num!=0){
            if(num%2==0)
                com[i]=1;
            else
                com[i]=0;
            num=num>>1;
            i++;
        }
        for(int i=0; i<32; i++){
            sum+=com[i]*pow(2,i);
        }
        return sum;
    }
};