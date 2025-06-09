class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;i++){
            int c=0;
            int x=i;
            while(x){
                c+=x&1;
                x>>=1;
            }
            res.push_back(c);
        }
        return res;
    }
};