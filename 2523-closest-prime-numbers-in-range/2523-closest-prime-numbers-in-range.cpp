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
    vector<int> closestPrimes(int left, int right) {
        ans.clear();
        seive(right);
        vector<int> res = {-1, -1};
        int dis = INT_MAX;
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] <= right && ans[i - 1] >= left) {
                if (ans[i] - ans[i - 1] < dis) {
                    dis = ans[i] - ans[i - 1];
                    res = {ans[i - 1], ans[i]};
                }
            }
        }
        return res;
    }
};