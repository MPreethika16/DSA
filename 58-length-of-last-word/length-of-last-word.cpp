class Solution {
public:
    int lengthOfLastWord(string s) {\
        int c=0;
        bool count=false;
       for(int i=s.size()-1;i>=0;i--){
        if(s[i]!=' '){
            count=true;
            c++;
        }
        else if(count){
            break;
        }
            
       } 
       return c;
    }
};