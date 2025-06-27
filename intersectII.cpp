class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int>mp;
        if(n>m){
            return intersect(nums2,nums1);
        }
        for(int num:nums1){
            mp[num]++;
        }
        for(int num:nums2){
            if(mp.find(num)!=mp.end()&&mp[num]>0){ 
                res.push_back(num);
                mp[num]--;
            }
        }
        return res;
    }
};