class Solution {
public:
    vector<int> ans;
    void seive(int N) {
        ans.clear();
        if (N < 2)
            return;
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
    int countPrimes(int n) {
        seive(n - 1);
        return ans.size();
    }
};