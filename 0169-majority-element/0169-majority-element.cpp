class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int c = 0,canditate=0;
       for(int n : nums){
       if(!c) canditate = n;
       c += (n == canditate) ? 1 : -1;
       }
       return canditate;
    }
};