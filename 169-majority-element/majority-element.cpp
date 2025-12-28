class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0];
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                c++;
            }
            else{
                c--;
                if(c==0){
                    ele=nums[i+1];
                }
            }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
               cnt++;
            }
            
        }
        if(cnt>nums.size()/2){
            return ele;
        }
        return -1;
    }
};