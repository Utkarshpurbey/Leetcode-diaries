class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       int i = 0;
       int j = 1;
       int n = arr.size();

       while(i<n && j<n){
        if(arr[i] == arr[j]){
            j++;
        }else{
            i++;
            arr[i] = arr[j];
        }
       }
       return i+1;
    }
};