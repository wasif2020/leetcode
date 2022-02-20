class Solution {
public:
    static bool comparator(vector<int>a, vector<int>b){
        if(a[0] > b[0]) 
            return false;
        else if (a[0] == b[0] && a[1] < b[1]){
            return false;
        }
        return true;
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comparator);
        int start = intervals[0][0];
        int end = intervals[0][1];
        int count=1;
        
        for(int i=1;i<intervals.size();i++){
            if(start <= intervals[i][0] && end >= intervals[i][1])
                continue;
            else{
                ++count;
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        return count;
    }
};