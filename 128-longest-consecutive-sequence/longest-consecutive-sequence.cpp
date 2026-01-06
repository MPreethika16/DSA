class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        int maxi=INT_MIN;
       
        for(auto i:s){
           
            if(s.find(i-1)==s.end()){
               int  x=i;
                int c=1;
                while(s.find(x+1)!=s.end()){
                    x=x+1;
                    c++;
        
                }

            maxi=max(maxi,c);
            }
        }
        return maxi;
    }
};