class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int sell=INT_MIN;
       
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            if((prices[i]-buy)>sell){
                sell=prices[i]-buy;
            }
            
        }
        return sell;
    }
};