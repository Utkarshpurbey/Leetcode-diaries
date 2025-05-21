class Solution {
public:
    void reverse(vector<int>&arr,int i,int j){
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
            k = k%n;
         if(k==0 || n ==1) return;

        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};