class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int ans = 0, lar = INT_MIN, i = 0;
        size_t n = nums.size();
        while (i < n) {
            if (nums[i] <= lar) {
                ans += lar - nums[i] + 1;
                lar++;
            } else {
                lar = nums[i];
            }
            i++;
        }
        return ans;
    }
};