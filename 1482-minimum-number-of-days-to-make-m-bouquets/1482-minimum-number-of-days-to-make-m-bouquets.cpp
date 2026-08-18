class Solution {
public:
    bool isPossible(int mid, int k, int m, vector<int>& nums) {
        int bloomed = 0, bouquet = 0;
        for (int& num : nums) {
            if (num <= mid) {
                bloomed++;
                if (bloomed == k) {
                    bouquet++;
                    bloomed = 0;
                }
            } else {
                bloomed = 0;
            }
        }
        return bouquet >= m;
    }
    int minDays(vector<int>& nums, int m, int k) {
        size_t n = nums.size();
        if (n < 1LL * m * k)
            return -1;
        int st = 1;
        int end = *max_element(nums.begin(), nums.end());
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (isPossible(mid, k, m, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};