class Solution {
public:
    int maxDistToClosest(vector<int>& nums) {
        int n = nums.size();
        int mx = 0, prev = -1, i = 0;
        while (i < n) {
            if (nums[i] == 1) {
                int dis;
                if (prev == -1) {
                    dis = i;
                } else {
                    dis = (i - prev) / 2;
                }
                mx = max(mx, dis);
                prev = i;
            }
            i++;
        }
        mx = max(mx, n - prev - 1);
        return mx;
    }
};