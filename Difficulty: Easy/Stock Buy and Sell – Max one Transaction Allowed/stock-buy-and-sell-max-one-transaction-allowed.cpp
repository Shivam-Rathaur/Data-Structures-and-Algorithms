class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        
        int n = prices.size();
        
        int maxi = 0, buy = prices[0];
        for(int i=1 ; i<n ; i++){
            int profit = prices[i] - buy;
            maxi = max(maxi,profit);
            if(profit<0) buy = prices[i];
        }
        
        return maxi;
        
    }
};
