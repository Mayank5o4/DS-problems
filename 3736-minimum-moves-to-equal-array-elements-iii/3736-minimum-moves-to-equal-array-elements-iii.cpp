class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        size_t n = nums.size();
        for (int i = 0; i < n; i++) {
            ans += abs(nums[i] - nums[n - 1]);
        }
        return ans;
    }
};