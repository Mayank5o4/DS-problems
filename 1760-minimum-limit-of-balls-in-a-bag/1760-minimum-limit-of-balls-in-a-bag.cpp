class Solution {
public:
    bool isPossible(int mid, int maxOps, vector<int>& nums) {
        int minOps = 0;
        for (int& num : nums) {
            minOps += (num - 1) / mid;
            if (minOps > maxOps) {
                break;
            }
        }
        return minOps <= maxOps;
    }
    int minimumSize(vector<int>& nums, int maxOps) {
        constexpr int VAL = 1e9;
        int st = 1;
        int end = VAL;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (isPossible(mid, maxOps, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};