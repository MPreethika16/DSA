class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>dp;
       
        for(int i=0;i<34;i++){
            vector<int>rows(i+1,1);
            for(int j=1;j<i;j++){
                rows[j]=dp[i-1][j-1]+dp[i-1][j];
            }
            dp.push_back(rows);
        }
        return dp[rowIndex];
    }
};