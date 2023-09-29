class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return true;
        bool inc = true, dec= true;

        for(int i =0;i<n-1;i++){
            if(arr[i]<=arr[i+1] ){
                if(arr[i]!=arr[i+1])  dec = false;
            }else if(arr[i]>=arr[i+1]){
                if(arr[i]!=arr[i+1]) inc = false;
            }
        }
        return inc || dec;
        
        
    }
};