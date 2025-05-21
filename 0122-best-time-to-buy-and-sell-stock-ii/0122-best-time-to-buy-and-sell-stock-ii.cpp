class Solution {
public:
    int maxProfit(vector<int>& price) {
        int intialPrice = price[0];
        int ans =0;
        for(int i = 0;i<price.size();i++){
            if(price[i]<=intialPrice){
                intialPrice = price[i];
            }else {
                ans+= price[i]-intialPrice;
                intialPrice = price[i];
            }
        }
        return ans;
    }
};