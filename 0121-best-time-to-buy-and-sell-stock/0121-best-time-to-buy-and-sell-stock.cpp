class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxProfit = 0;
        for(int i:prices){
            if(min>=i){
                min = i;
            }
            maxProfit = max(maxProfit,i-min);
        }
        return maxProfit;
    }
};