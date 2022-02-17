class Solution {
public:
    long long smallestNumber(long long num) {
        if(num==0)
            return num;
        long long n=abs(num);
        int s=log10(n)+1;
        vector<int>v;
        for(int i=0; i<s; i++){
           int no=n%10;
            v.push_back(no);
            n=n/10;
        }
        sort(v.begin(),v.end());
        int i=1;
        if(num>0){
        while(v[0]==0){
            if(v[i]!=0)
                swap(v[i],v[0]);
            i++;
        }
        n=0;
        for(int i=0; i<s; i++){
            n+=v[i]*pow(10,s-i-1);
        }
        }
        else{
        n=0;
        for(int i=0; i<s; i++){
            n+=v[i]*pow(10,i);
        }
        }
        if(num<0)
            return -n;
        return n;
    }
};