class Solution {
public:
    vector<int>generateRow(int& rows){
        vector<int>row;
       int ele=1;
       row.push_back(1);
        for(int i=1;i<rows;i++){
            ele=ele*(rows-i);
            ele=ele/i;
            row.push_back(ele);
        }
    
    return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
        
        ans.push_back(generateRow(i));
    }
    return ans;

    }
};