class Solution {
public:
    int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
    int findGCD(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        return gcd(*s.begin(),*s.rbegin());
    }
};