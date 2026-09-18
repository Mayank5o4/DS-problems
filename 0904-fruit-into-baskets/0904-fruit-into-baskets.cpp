class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int, int> mp;
        size_t n = nums.size();
        int i = 0, ans = 0;
        for (int j = 0; j < n; j++) {
            mp[nums[j]]++;
            while (mp.size() > 2) {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0) {
                    mp.erase(nums[i]);
                }
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};