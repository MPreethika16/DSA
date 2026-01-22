class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //1 find longest prefix match
        int index=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        // wrapping up to the first permutation (last permutation is input )
        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
        // check the minimum element which is greater than the nums[index] and swap with it 
        for(int i=nums.size()-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }

        reverse(nums.begin()+index+1,nums.end());
        
        }
    }
};