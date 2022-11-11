class Solution {
public:
    string reorderSpaces(string text) {
        vector<string>v;
        int count=0;
    for(int i=0; i<text.size(); i++){
     if(text[i]==' ')
         count++;
      else{
          string str="";
          while(text[i]!=' ' and i<text.size()){
              str+=text[i++];
          }
          v.push_back(str);
          i--;
      }
}
        if(v.size()==1){
            text="";
            text=v[0];
            for(int i=0; i<count; i++){
                text+=' ';
            }
            return text;
        }
        int no=count/(v.size()-1);
        int last=count%(v.size()-1);
        text="";
        for(int i=0; i<v.size(); i++){
            text+=v[i];
            if(i==v.size()-1){
                for(int i=0; i<last; i++)
                    text+=' ';
            }
            else{
            for(int i=0; i<no; i++){
                text+=' ';
            }
            }
        }
        return text;
    }
};