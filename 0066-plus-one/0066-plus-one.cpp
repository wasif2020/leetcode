class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int car=1;
        vector<int>v;
        for(int i=digits.size()-1; i>=0; i--){
            int dig=digits[i]+car;
            if(dig>=10){
                v.push_back(dig%10);
                car=dig/10;
                continue;
            }
            v.push_back(dig);
            car=0;
            
        }
        if(car!=0)
            v.push_back(car);
        reverse(v.begin(),v.end());
        return v;
    }
};