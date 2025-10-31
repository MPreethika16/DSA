class Solution {
public:
    bool CommonPrefix(vector<string>&strs,int Len){
        string prefix=strs[0].substr(0,Len);
        for(int i=1;i<strs.size();i++){
            if(strs[i].substr(0,Len)!=prefix)
                return false;
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        int minLen=strs[0].size();
        int low=0,high=minLen;
        for(string s:strs){
            minLen=min(minLen,(int)s.size());
        }
        while(low<=high){
         int   mid=(low+high)/2;
        
        if(CommonPrefix(strs,mid))
            low=mid+1;
        else
            high=mid-1;

    }
    return strs[0].substr(0,(low+high)/2);
    }
};