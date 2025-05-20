class Solution {
    public:
        bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            int n=nums.size();
            vector<int>deltaArray(n+1,0);
            for(const auto query:queries){
                int left=query[0];
                int right=query[1];
                deltaArray[left]+=1;
                deltaArray[right+1]-=1;
            }
            vector<int>count;
            int currentCounts=0;
            for(int delta:deltaArray){
                currentCounts+=delta;
                count.push_back(currentCounts);
            }
            for(int i=0;i<nums.size();i++){
                if(count[i]<nums[i])
                    return false;
            }
            return true;
        }
    };