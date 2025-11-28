class Solution {
public:
    string reverseWords(string s) {
        string ans="";
            string p="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                reverse(p.begin(),p.end());
                ans+=p;
                ans+=' ';
                p="";
            }
            else 
            {
                p+=s[i];
            }
        }
        reverse(p.begin(),p.end());
        ans+=p;
        return ans;
    }
};