class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        unordered_map<int,int> map;
        vector<int> ans;

        for(int i =0;i<n;i++){
            if(map.find(target-arr[i])!=map.end()){
                ans.push_back(i);
                ans.push_back(map[target-arr[i]]);
                break;
            }else{
                map[arr[i]] = i;
            }
        }
        return ans;
    }
};