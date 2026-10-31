class Solution {
public:
    void reverseString(vector<char>& s) {
        size_t n = s.size();
        for (int i = 0; i < n; i++) {
            if (i <= n - i - 1) {
                swap(s[i], s[n - i - 1]);
            }
        }
    }
};