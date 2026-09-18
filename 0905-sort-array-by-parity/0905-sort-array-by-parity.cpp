class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans1, ans2;
        for (int num : nums) {
            if (num % 2 == 0) {
                ans1.push_back(num);
            } else {
                ans2.push_back(num);
            }
        }
        ans1.insert(ans1.end(), ans2.begin(), ans2.end());
        return ans1;
    }
};