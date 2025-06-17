class Solution {
public:
    int xorOperation(int n, int start) {
        int answer=0;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=start+2*i;
            answer^=res[i];
        }
        return answer;
    }
