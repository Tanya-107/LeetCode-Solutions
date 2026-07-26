class Solution {
public:
stack<char>st;
    bool isValid(string s) {
        for (int i=0;i<s.length();i++){
            if(s[i]=='('|| s[i]=='[' || s[i]=='{'){
               st.push(s[i]); 
            }
            else{
               if( st.empty()){
                return false;
               }
                char ch=st.top();
                st.pop();
                if(s[i]==')' && ch=='('){
continue;
                }
                else if(s[i]==']' && ch=='['){
continue;
                }
                else if(s[i]=='}' && ch=='{'){
continue;
                }
                else
                {return false;}
            }
        }
        return st.empty();
    }
};