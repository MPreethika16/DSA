class Solution {
public:
    vector<vector<int>>dp;
    int helper(string &s,string &b,int n,int m){
        if(n==0||m==0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(s[n-1]==b[m-1]){
            return dp[n][m]=helper(s,b,n-1,m-1)+1;
        }
        else    
            return dp[n][m]=max(helper(s,b,n,m-1),helper(s,b,n-1,m));
    }
    int longestPalindromeSubseq(string s) {
        string b=s;
        reverse(b.begin(),b.end());
        int n=s.length();
        dp.assign(n+1,vector<int>(n+1,-1));
        return helper(s,b,n,n);
    }
};