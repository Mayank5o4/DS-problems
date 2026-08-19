class Solution {
public:
    bool isHelper(int mid, int p, vector<int>& nums) {
        size_t n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i + 1] - nums[i] <= mid) {
                ++cnt;
                ++i;
            }
        }
        return cnt >= p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(begin(nums), end(nums));
        int st = 0;
        int end = nums[nums.size() - 1] - nums[0];
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (isHelper(mid, p, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};