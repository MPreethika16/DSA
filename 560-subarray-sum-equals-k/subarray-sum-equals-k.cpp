class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
        //std::vector<int>pf(nums.size());
        int c=0;
        int ps=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            ps+=nums[i];
            if(mp.find(ps-k)!=mp.end()){
                c+=mp[ps-k];
            }
            mp[ps]++;
        }
        return c;
    }
};