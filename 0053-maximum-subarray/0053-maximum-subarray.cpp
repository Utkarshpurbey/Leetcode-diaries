class Solution {
public:
    int maxSubArray(vector<int>& arr) {
       
    int maximum_sum = INT_MIN;
    int current_sum =0;

    for(auto i:arr){
        current_sum = max(current_sum+i,i);
        maximum_sum = max(current_sum,maximum_sum);
    }
    return maximum_sum;
    }
};