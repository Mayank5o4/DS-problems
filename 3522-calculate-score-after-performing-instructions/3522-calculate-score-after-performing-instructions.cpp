class Solution {
public:
    long long calculateScore(vector<string>& nums, vector<int>& values) {
        size_t n = nums.size();
        long long score = 0;
        vector<bool> visit(n, false);
        int i = 0;
        while (i >= 0 && i < n && !visit[i]) {
            visit[i] = true;
            if (nums[i] == "add") {
                score += values[i];
                visit[i] = true;
                i++;
            } else if (nums[i] == "jump") {
                i = i + values[i];
            }
        }
        return score;
    }
};