class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> set(arr.begin(),arr.end());
       int i =1;
       int ans = 1;
       while(i<=n+1){
           if(set.find(i)!=set.end()){
               i++;
           }else{
             ans = i;
             break;
           }
       }
       return ans;
    }
};