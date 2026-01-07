class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>vp;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    vp.push_back({i,j});
                }
            }
        }

        for(auto p:vp){
            int k=p.first;
            int l=p.second;
            for(int i=0;i<matrix[0].size();i++){
                matrix[k][i]=0;
            }
            for(int j=0;j<matrix.size();j++){
                matrix[j][l]=0;
            }
        }
        
    }
};