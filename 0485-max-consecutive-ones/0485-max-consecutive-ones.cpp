class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int ans = 0;
        int maxOne =0;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(arr[i]==1){
                maxOne++;
                ans = max(maxOne,ans);
            }else maxOne =0;
        }
        return ans;
        
    }
};