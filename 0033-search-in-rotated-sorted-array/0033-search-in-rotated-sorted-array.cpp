class Solution {
public:
    int search(vector<int>& a, int target) {
        int l = 0, r = a.size() - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (a[m] == target) return m;

            // Check if the left half is sorted
            if (a[l] <= a[m]) {
                if (a[l] <= target && target < a[m]) {
                    r = m - 1; // Target is in the left sorted half
                } else {
                    l = m + 1; // Target is in the right half
                }
            } 
            // Otherwise, the right half must be sorted
            else {
                if (a[m] < target && target <= a[r]) {
                    l = m + 1; // Target is in the right sorted half
                } else {
                    r = m - 1; // Target is in the left half
                }
            }
        }
        return -1;
    }
};