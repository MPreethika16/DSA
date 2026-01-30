class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int mini=INT_MAX;
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right=nums.size()-1;
            
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                int diff=abs(sum-target);
               if(diff<mini){
                mini=diff;
                ans=sum;
               }
                if(sum>target){
                    right--;
                    
                }
                else if(sum<target){
                    left++;
                }
                else if(sum==target){
                    return sum;
                }

            }
        }
        return ans;
    }
};