class Solution {
public:

    // int bruteForce(vector<int> arr,int k){
    //     int n = arr.size();    
    //     int count = 0;
    //     for(int i = 0;i<n;i++){
    //         int sum = 0;
    //         for(int j =i;j<n;j++){
    //             sum+=arr[j];
    //             if(k == sum) {
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;
    // }

    int ansWithPrefixSum(vector<int>arr,int target){
        int n = arr.size();
        unordered_map<int,int> m;
        int running_sum = 0;
        int ans = 0;
        m[0] = 1;
        for(int i: arr){
           running_sum += i;
           int current_target  = running_sum - target;
           if(m.find(current_target)!=m.end()){
                ans+=m[current_target];
           }
           m[running_sum]++;
        }
        return ans;
    }
    
    int subarraySum(vector<int>& nums, int k) {
        return ansWithPrefixSum(nums,k);
    }
};