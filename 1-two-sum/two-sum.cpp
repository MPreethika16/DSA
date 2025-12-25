class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<pair<int,int>>vp;
        for(int i=0;i<nums.size();i++){
           vp.push_back({nums[i],i});
        }
        sort(vp.begin(),vp.end());
        int left=0,right=nums.size()-1;
        int sum=0;
        while(left<right){
            sum=vp[left].first+vp[right].first;
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else{
                return {vp[left].second,vp[right].second};
            }
        }
        return {-1,-1};
    }
};