class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        size_t n = nums.size();
        long long mul = 1;
        int ops = 0, modulo = 1e9 + 7;
        for (int i = 0; i < n; i++) {
            pq.push(nums[i]);
        }
        while (ops < k) {
            int i = pq.top();
            pq.pop();
            pq.push(i + 1);
            ops++;
        }
        while (!pq.empty()) {
            mul = (mul * pq.top()) % modulo;
            pq.pop();
        }
        return mul;
    }
};