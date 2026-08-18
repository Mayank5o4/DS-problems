class Solution {
public:
    bool isPossible(int cap, int days, vector<int>& nums) {
        int mxDays = 1, curr = 0;
        for (int& num : nums) {
            if (curr + num > cap) {
                curr = 0;
                mxDays++;
            }
            curr += num;
        }
        return mxDays <= days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int st = *max_element(begin(nums), end(nums));
        int end = accumulate(nums.begin(), nums.end(), 0);
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (isPossible(mid, days, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};