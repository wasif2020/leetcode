class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int idx=-1;
        int mdis=INT_MAX;
        for(int i=0; i<points.size(); i++){
            int dx=x-points[i][0];
            int dy=y-points[i][1];
            if(dx==0 or dy==0){
                int x=abs(dx+dy);
                if(x<mdis){
                    idx=i;
                    mdis=x;
                    
                }
            }
            
        }
        return idx;
    }
};