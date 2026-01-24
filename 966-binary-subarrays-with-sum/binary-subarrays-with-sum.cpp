class Solution {
public: 
    int atMost(vector<int>&nums,int k){
        int left=0;
        int ans=0;
        int ones=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==1)
                ones+=1;
            while(ones>k){
                if(nums[left]==1)
                    ones-=1;
                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal==0) return atMost(nums,goal);
        else return atMost(nums,goal)-atMost(nums,goal-1);

    }
};