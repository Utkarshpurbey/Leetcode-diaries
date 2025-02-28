class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int ans = 0;
        unordered_map<int,int>m;
        int running_sum = 0;
        m[0] = 1;

        for(int i :arr){
            running_sum +=i;
         int mod = running_sum % k;
            if (mod < 0) mod += k;
            if(m.find(mod)!=m.end()){
                ans+=m[mod];
            }
            m[mod]++;
        }
        return ans;
        
    }
};