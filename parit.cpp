class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0;
       
        int n=nums.size();
         int j=1;
        while(i<n&&j<n){
            if(nums[i]%2==0){
                i+=2;
            }
            else if(nums[j]%2==1){
                j+=2;
            }
            else
                swap(nums[i],nums[j]);
        }
        return nums;
    }
};