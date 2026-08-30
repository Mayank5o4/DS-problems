class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        auto it1 = max_element(nums.begin(), nums.end());
        auto it2 = min_element(nums.begin(), nums.end());
        int index1 = it1 - nums.begin();
        int index2 = it2 - nums.begin();
        int i = min(index2, index1);
        int j = max(index2, index1);
        return min({j + 1, n - i, i + 1 + n - j});
    }
};