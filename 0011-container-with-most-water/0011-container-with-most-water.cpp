class Solution {
public:
    int maxArea(vector<int>& arr) {
       int i = 0;
       int n = arr.size();
       int j = n-1;
       int ans = 0;

       while(i<=j){
        int water = (j-i) * min(arr[i],arr[j]);
        ans = max(ans,water);
        if(arr[i]<=arr[j]){
            i++;
        }else{
            j--;
        }
       }
       return ans;
    }
};