class Solution {
public:
    bool isPossible(int mid, int k, vector<int>& nums) {
        size_t n = nums.size();
        int sum = 0, grp = 1;
        for (int& num : nums) {
            if (sum + num > mid) {
                sum = num;
                grp++;
            } else {
                sum += num;
            }
        }
        return grp <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        // constexpr int VAL = 1e6;
        int st = *max_element(begin(nums), end(nums));
        int end = accumulate(nums.begin(), nums.end(), 0);
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