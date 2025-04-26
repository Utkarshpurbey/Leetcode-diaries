class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int n = arr.size();

        for(int i =0;i<n-1;i++){
             if (i > 0 && arr[i] == arr[i - 1]) continue; 
            int required_sum = -1* arr[i];
            int low = i+1;
            int high = n-1;
            while(low<high){
                int sum = arr[low] +arr[high];
                if(sum == required_sum){
                    ans.push_back({arr[i],arr[low],arr[high]});
                     while (low < high && arr[low] == arr[low + 1]) low++;
                    while (low < high && arr[high] == arr[high - 1]) high--;
                   low++;high--;
                }else if(sum >required_sum ){
                    high--;
                }else{
                    low++;
                }
            }
        }
        return ans;
    }
};