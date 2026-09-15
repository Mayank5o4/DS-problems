class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(begin(nums),
                                                          end(nums));
        size_t n = nums.size();
        long long mul = 1;
        int ops = 0, modulo = 1e9 + 7;
        while (ops < k) {
            int i = pq.top();
            pq.pop();
            i++;
            pq.push(i);
            ops++;
        }
        while (!pq.empty()) {
            mul = (mul * pq.top()) % modulo;
            pq.pop();
        }
        return mul;
    }
};