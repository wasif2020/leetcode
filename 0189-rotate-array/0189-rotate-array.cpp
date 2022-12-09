class Solution {
public:
    void reverse(vector<int>&nums,int s,int e){
        while(s<e){
            swap(nums[s++],nums[e--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        // rotating k position to left is same as rotating n-k position to the right;
        int n=nums.size();
        k=k%n;
        if(n==0 or n==1){
            return;
        }
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};