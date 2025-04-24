class Solution {
public:
    int countCompleteSubarrays(vector<int>& arr) {
        unordered_set<int>s(arr.begin(),arr.end());
        int n = arr.size();
        int unique = s.size();
        int count = 0;

        for(int i =0;i<n;i++){
             unordered_set<int> ds;
            for(int j =i;j<n;j++){
                ds.insert(arr[j]);
                if(ds.size() == unique){
                    count++;
                }
            }
        }
        return count;
    }
};