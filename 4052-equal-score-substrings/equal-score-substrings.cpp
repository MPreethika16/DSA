class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
          sum=sum+(s[i]-'a')+1;
        }
        if(sum%2!=0) return false;
        int half=sum/2;
        for(int i=0;i<n;i++){
            sum-=((s[i]-'a')+1);
            if(sum==half){
                return true;
            }
        }
        return false;
    }
};