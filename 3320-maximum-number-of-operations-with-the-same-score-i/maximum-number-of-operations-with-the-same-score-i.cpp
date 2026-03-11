class Solution {
public:
    int maxOperations(vector<int>& nums) {
         if(nums.size()==2) return 1;
        int ans=1;
        int score=nums[0]+nums[1];
        for(int i=2;i<nums.size();i+=2){
            if((nums[i]+nums[i+1])==score){
                ans++;
            }
            else 
                break;
        }
        return ans;
    }
};