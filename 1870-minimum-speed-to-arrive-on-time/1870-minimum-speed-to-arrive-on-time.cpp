class Solution {
public:
    bool isPossible(int mid, double hour, vector<int>& nums) {
        int speed = mid;
        double totaltime = 0;
        int i = 0, n = nums.size();
        while (i < n - 1 && totaltime <= hour) {
            totaltime += ceil((double)nums[i] / speed);
            i++;
        }
        totaltime += (double)nums[n - 1] / speed;
        return totaltime <= hour;
    }
    int minSpeedOnTime(vector<int>& nums, double hour) {
        constexpr int VAL = 1e7;
        int st = 1;
        int end = VAL, n = nums.size();
        if (n > ceil(hour))
            return -1;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (isPossible(mid, hour, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};