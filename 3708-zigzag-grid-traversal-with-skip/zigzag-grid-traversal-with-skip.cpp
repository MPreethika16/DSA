class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
        bool right=true;
       bool last=false;
        for(int i=0;i<grid.size();i++){
           if(right){
            for(int j=0;j<grid[0].size();j+=2){
                if(j==grid[0].size()-1){
                    last=true;
                }
                
                ans.push_back(grid[i][j]);

            }
            right=false;
           }
           else{
                if(last==true){
                        for(int k=grid[0].size()-2;k>=0;k-=2){
                            ans.push_back(grid[i][k]);
                        }
                }
                else{
                    for(int k=grid[0].size()-1;k>=0;k-=2){
                        ans.push_back(grid[i][k]);
                    }
                }
                right=true;
           }
        }
        return ans;
    }
};