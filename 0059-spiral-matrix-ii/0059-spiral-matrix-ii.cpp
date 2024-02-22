class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res;
        vector<int>v(n,0);
        for(int i=0; i<n; i++)
            res.push_back(v);
        int num=1;
        int rowTop=0, rowBot=n-1, colLeft=0, colRight=n-1;
        
        while(rowTop<=rowBot and colLeft<=colRight){
            if(rowTop<=rowBot){
                for(int i=colLeft; i<=colRight; i++){
                    res[rowTop][i]=num++;
                }
                rowTop++;
            }
            if(colLeft<=colRight){
                for(int i=rowTop; i<=rowBot; i++){
                    res[i][colRight]=num++;
                }
                colRight--;
            }
          
            if(rowTop<=rowBot){
                for(int i=colRight; i>=colLeft; i--){
                    res[rowBot][i]=num++;
                }
                rowBot--;
            }
     
            if(colLeft<=colRight){
                for(int i=rowBot; i>=rowTop; i--){
                    res[i][colLeft]=num++;
                }
                colLeft++;
            }
        }      
     return res;         
    } 
};