class Solution {
public:
    void moveZeroes(vector<int>& arr) {
       int noOfNonZero =0;
       for(int i = 0 ;i<arr.size();i++){
            if(arr[i]!=0){
                int temp = arr[i];
                arr[i] =arr[noOfNonZero];
                arr[noOfNonZero] = temp;
                noOfNonZero++;
            }
       }

    }
};