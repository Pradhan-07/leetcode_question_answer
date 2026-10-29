class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int max_len = 0;
        int n = s.length(); 
        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) l--, r++;
            return r - l - 1;
        };
        for (int i = 0; i < n; ++i) {
            int len = max(expand(i, i), expand(i, i + 1));
            if (len > max_len) {
                max_len = len;
                start = i - (len - 1) / 2;
            }
        }
        return s.substr(start, max_len);
    }
};