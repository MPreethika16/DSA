class Solution {
public:
    vector<vector<int>>dp;
    int helper(string &word1,string &word2,int n,int m){
        if(n==0&&m==0) return 0;
        if(n==0) return m;
        if(m==0) return n;
        if(dp[n][m]!=-1) return dp[n][m];
        if(word1[n-1]==word2[m-1]){
            return dp[n][m]=helper(word1,word2,n-1,m-1);
        }
        else{
            int m1=helper(word1,word2,n,m-1);
            int m2=helper(word1,word2,n-1,m-1);
            int m3=helper(word1,word2,n-1,m);
            return dp[n][m]=min({m1,m2,m3})+1;
        }
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        dp.assign(n+1,vector<int>(m+1,-1));
        int ans=helper(word1,word2,n,m);
        return ans;
    }
};