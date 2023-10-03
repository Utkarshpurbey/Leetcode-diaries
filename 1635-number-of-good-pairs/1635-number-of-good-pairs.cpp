class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> set;
        int res = 0;
        for(int a: nums){
            if(set.find(a)!= set.end()){
                res+= set[a];
                set[a]++;
            }else{
                set[a] =1;
            }
        } 
        return res;
        
    }
};