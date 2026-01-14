class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>result;
        int maxc=0;
        int n=s.size();
        int c=0;
        int i=0;
        
        for(int j=0;j<n;j++){
            while(result.find(s[j])!=result.end()){
                result.erase(s[i]);
                ++i;
            }
            result.insert(s[j]);
            maxc=max(maxc,j-i+1);
        }
        return maxc;  
    }
};