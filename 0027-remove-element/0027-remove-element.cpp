class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int k = 0;
        int n = arr.size();
        int i =0;
        while(i<n){
            int firstNonValIndex = -1;
            if(arr[i] == val){
                if(i+1>=n) break;
                int j = i+1;
                while(j<n){
                    if(arr[j]!=val){
                        firstNonValIndex= j;
                        break;
                    }
                    j++;
                }
                if(firstNonValIndex == -1) break;
                swap(arr[i],arr[firstNonValIndex]);
            }
            i++;
        }
        for(auto i :arr){
            if(i!=val) k++;
        }
      
        return k;
    }
};