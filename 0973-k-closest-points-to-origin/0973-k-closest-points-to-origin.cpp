class Solution {
public:
    int helper(int x, int y) { return pow(x, 2) + pow(y, 2); }
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        size_t n = nums.size();
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) {
            int distance = helper(nums[i][0], nums[i][1]);
            pq.push({distance, i});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<vector<int>> res;
        while (!pq.empty()) {
            int point = pq.top().second;
            pq.pop();
            res.push_back(nums[point]);
        }
        return res;
    }
};
