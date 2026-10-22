#pragma GCC optimize("ofast")
class Solution {
public:
    vector<int> ans;
    void seive(int N) {
        vector<bool> isPrime(N + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2; i * i <= N; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= N; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 2; i <= N; i++) {
            if (isPrime[i]) {
                ans.push_back(i);
            }
        }
    }
    vector<vector<int>> findPrimePairs(int n) {
        seive(n);
        unordered_map<int, int> mp;
        vector<vector<int>> res;
        for (int i = 0; i < ans.size(); i++) {
            mp[ans[i]] = 1;
        }
        for (int i = 0; i < ans.size(); i++) {
            int x = n - ans[i];
            if (x < ans[i])
                break;
            if (mp.count(x)) {
                res.push_back({ans[i], x});
            }
        }
        return res;
    }
};