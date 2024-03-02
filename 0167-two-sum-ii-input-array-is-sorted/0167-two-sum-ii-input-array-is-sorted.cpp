class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0,high=numbers.size()-1;
        vector<int>v;
        while(low<high){
            if(numbers[low]+numbers[high]==target){
                v.push_back(low+1);
                v.push_back(high+1);
                return v;
            }
            else if((numbers[low]+numbers[high])>target)
                high--;
            else
                low++;
                
        }
        return v;
    }
};