class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans(m);
        for (int i = 0; i < m; i++) {
            string s = "";
            for (int j = 0; j < n; j++) {
                if (j == n - 1 || i == 0) {
                    s += ".";
                } else {
                    s += "#";
                }
            }
            ans[i] = s;
        }
        return ans;
    }
};