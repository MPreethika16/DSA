class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }

            else{
                if(st.empty()) return false;
               char topc=st.top();
               st.pop();
                if(s[i]==')'&&topc!='('){
                    return false;
                }
                else if(s[i]==']'&&topc!='[')
                    return false;
                else if (s[i]=='}'&&topc!='{')
                    return false;
            }
        }
        return st.size()==0;
    }
};