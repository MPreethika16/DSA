class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(const auto&nums:arr){
            mp[nums]++;
        }
        int maxi=-1;
        for(const auto&pair:mp){
            int freq=pair.second;
            int key=pair.first;
            if(freq==key){
                maxi=max(maxi,key);
            }
            
        }
        if(maxi==0){
            return -1;
        }
        return maxi;
    }
};