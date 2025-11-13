class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sum=0;
        int ele=nums[0];
        for(int i=0;i<nums.size();i++){
            if(sum==0){
                sum=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                sum++;
            }
            else{
                sum--;
            }
        }
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(ele==nums[i]){
                c++;
            }
        }
        if(c>nums.size()/2){
            return ele;
        }
        return -1;
    }
};