class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n= prices.size();
        
        for(int i=0;i<n;i++) {
            int original= prices[i];
            for(int j=i+1;j<n;j++) {
                if(prices[j]<=original) {
                    prices[i]= original- prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};