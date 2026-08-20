class Solution {
public:
    bool isPossible(int mid, int m, vector<int>& nums) {
        int diff = 1, curr = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - curr >= mid) {
                curr = nums[i];
                diff++;
            }
        }
        return diff >= m;
    }
    int maxDistance(vector<int>& nums, int m) {
        sort(begin(nums), end(nums));
        int st = 0;
        int end = *max_element(nums.begin(), nums.end());
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (isPossible(mid, m, nums)) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return st - 1;
    }
};