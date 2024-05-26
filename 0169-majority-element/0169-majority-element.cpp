class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
      int majorityEle = arr[0];
      int count = 1;
      for(int i = 1;i<n;i++){
        if(arr[i]!=majorityEle){
            if(count == 0){
                majorityEle = arr[i];
                count = 1;
            }else{
                count --;
            }
        }else{
            count++;
        }
      }
      return majorityEle;
    }
};