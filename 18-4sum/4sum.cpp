class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        if (nums.size() < 4) return {};
        for(int i=0;i<nums.size()-3;i++){
                if(i>0&&nums[i]==nums[i-1]){
                    continue;
                }
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>(i+1)&&nums[j]==nums[j-1]){
                    continue;
                }
                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        vector<int>quad;
                        quad.push_back(nums[i]);
                        quad.push_back(nums[j]);
                        quad.push_back(nums[left]);
                        quad.push_back(nums[right]);
                        ans.push_back(quad);
                        while(left<right&&nums[left]==nums[left+1]){
                            left++;
                        }
                        while(left<right&&nums[right]==nums[right-1]){
                            right--;
                        }
                        left++;
                        right--;
                    }
                    else if(sum<target){
                        left++;
                    }
                    else if(sum>target){
                        right--;
                    }

                }
            }
        }
        return ans;
    }
};