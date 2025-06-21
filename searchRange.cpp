class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccurance=-1;
        int lastOccurance=-1;
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                firstOccurance=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                lastOccurance=mid;
                low=mid+1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        

        
        return {firstOccurance,lastOccurance};
    }
};