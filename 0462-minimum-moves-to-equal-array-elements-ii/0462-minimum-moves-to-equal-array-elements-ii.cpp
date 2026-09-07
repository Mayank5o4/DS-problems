class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(begin(nums), end(nums));
        size_t n = nums.size();
        int res = 0, i = 0;
        while (i < n) {
            res += abs(nums[i] - nums[n / 2]);
            i++;
        }
        return res;
    }
};