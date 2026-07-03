class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        else{
            for(int i=1;i<=s.size();i++){
                rotate(begin(s),begin(s)+1,end(s));
               if(s==goal){
                return true;
               }
              
        }
        }
        return false;
    }
};