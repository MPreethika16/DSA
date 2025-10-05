vector<vector<int>>dp;
class Solution {
public:
    // int helper(vector<vector<int>>&nums,int i,int j){
    //     int ans=INT_MAX;
    //     int n=nums.size();
    //     if(i==n-1) return nums[i][j];
    //     if(dp[i][j]!=-1) return dp[i][j];
    //    return dp[i][j]=nums[i][j]+min(helper(nums,i+1,j),helper(nums,i+1,j+1));
        
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        dp.assign(n,vector<int>(n,-1));
        for(int j=0;j<n;j++){
            dp[n-1][j]=triangle[n-1][j];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
};