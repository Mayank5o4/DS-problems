class Solution {
public:
    bool isPossible(int mid, int k, vector<int>& nums) {
        size_t n = nums.size();
        long long diff = 0;
        for (int i = 0, j = 0; i < n; i++) {
            j = max(j, i + 1);
            while (j < n && nums[j] - nums[i] <= mid) {
                j++;
            }
            diff += j - i - 1;
        }
        return diff >= k;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        constexpr int VAL = 1e6;
        sort(nums.begin(), nums.end());
        int st = 0;
        int end = VAL;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (isPossible(mid, k, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};