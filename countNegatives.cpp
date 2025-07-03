class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int sum=0;
        for(int i=0;i<grid.size();i++){
            int low=0,high=grid[0].size()-1;
           
            while(low<=high){
                int mid=(low+high)/2;
                if(grid[i][mid]>=0){
                    low=mid+1;
                }
                else
                    high=mid-1;

            }
            sum+=(grid[i].size()-low);
        }
        return sum;
    }
};