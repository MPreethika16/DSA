class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int n=s.size();
        int low=0;
        int high=n;
        for(int i=0;i<=n;i++){
            if(s[i]=='I'){
                ans.push_back(low);
                low++;
            }
            else
            {
                ans.push_back(high);
                high--;
            }

        }
        return ans;
    }
};