class Solution {
public:
    int getWinner(vector<int>& nums, int k) {
        size_t n = nums.size();
        int Winner = nums[0];
        int cnt = 0, i = 1;
        while (i < n) {
            if (Winner > nums[i]) {
                cnt++;
            } else {
                Winner = nums[i];
                cnt = 1;
            }
            if (cnt == k) {
                return Winner;
            }
            i++;
        }
        return *max_element(begin(nums), end(nums));
    }
};