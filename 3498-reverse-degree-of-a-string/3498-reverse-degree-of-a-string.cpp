class Solution {
public:
    int reverseDegree(string s) {
        const size_t n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x = 'z' - s[i] + 1;
            ans += x * (i + 1);
        }
        return ans;
    }
};