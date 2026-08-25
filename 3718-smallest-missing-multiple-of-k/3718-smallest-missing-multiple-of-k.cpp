class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        for (auto num : nums) {
            s.insert(num);
        }
        int ans = k;
        while (s.count(ans)) {
            ans += k;
        }
        return ans;
    }
};