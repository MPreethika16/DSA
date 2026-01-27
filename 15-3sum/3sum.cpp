class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int i=0;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i-1]==nums[i]) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>triplet;
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[j]);
                    triplet.push_back(nums[k]);
                    ans.push_back(triplet);
                    j++,k--;
                    while(j<k&&nums[j-1]==nums[j]){
                        j++;
                    }
                    while(j<k&&nums[k+1]==nums[k]){
                        k--;
                    }
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    k--;
                }
            }
           // i++;
        }
        return ans;
    }
};