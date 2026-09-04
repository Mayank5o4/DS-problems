class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int i = 0;
        const size_t n = nums.size();
        while (i < k) {
            auto it = min_element(nums.begin(), nums.end());
            *it *= multiplier;
            i++;
        }
        return nums;
    }
};