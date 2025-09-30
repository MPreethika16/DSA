   vector<vector<int>>dp;
class Solution {
public:
 
    int helper(vector<int>&nums,int i,int j){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=0;
        for(int k=i;k<=j;k++){
            int temp=helper(nums,i,k-1)+helper(nums,k+1,j)+(nums[i-1]*nums[k]*nums[j+1]);
            ans=max(ans,temp);
        }
        return dp[i][j]=ans;
    }

    int maxCoins(vector<int>& nums) {
         int n=nums.size();
       nums.push_back(1);
       nums.insert(nums.begin()+0,1);
        int m=nums.size();
        dp.assign(m+1,vector<int>(m+1,-1));
        return helper(nums,1,n);
    }
};