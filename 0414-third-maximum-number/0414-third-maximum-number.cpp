class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        auto it = s.rbegin();
        advance(it, s.size() >= 3 ? 2 : 0);
        return *it;
    }
};