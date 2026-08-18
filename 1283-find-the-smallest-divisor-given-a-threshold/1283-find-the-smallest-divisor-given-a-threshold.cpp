class Solution {
public:
    bool isHelper(int mid, int threshold, vector<int>& nums) {
        int divSum = 0;
        for (int& num : nums) {
            divSum += (num + mid - 1) / mid;
            if (divSum > threshold) {
                return false;
            }
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        constexpr int VAL = 1e6;
        const size_t n = nums.size();
        int st = 1, end = VAL;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (isHelper(mid, threshold, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};