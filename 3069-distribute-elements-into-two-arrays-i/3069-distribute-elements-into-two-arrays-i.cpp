class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> res1, res2;
        res1.push_back(nums[0]);
        res2.push_back(nums[1]);
        int i = 2;
        while (i < nums.size()) {
            if (res1.back() > res2.back()) {
                res1.push_back(nums[i]);
            } else {
                res2.push_back(nums[i]);
            }
            i++;
        }
        for (auto i : res2) {
            res1.push_back(i);
        }
        return res1;
    }
};