class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        int count=1;
        for(int i=0; i<sentences.size(); i++){
            count=1;
            int pos=sentences[i].find(" ");
            while(pos!=string::npos){
                count++;
                pos=sentences[i].find(" ",pos+1);
            }
            res=max(res,count);
        }
        return res;
    }
};