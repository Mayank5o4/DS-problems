class Solution {
public:
    typedef long long ll;
    bool isPossible(ll mid, ll cars, vector<int>& nums) {
        ll repair = 0;
        size_t n = nums.size();
        for (int i = 0; i < n; i++) {
            repair += sqrt(mid / nums[i]);
        }
        return repair >= cars;
    }
    ll repairCars(vector<int>& nums, int cars) {
        const int VAL = 100;
        ll st = 1, end = (ll)cars * (ll)cars * VAL;
        while (st < end) {
            ll mid = st + (end - st) / 2;
            if (isPossible(mid, cars, nums)) {
                end = mid;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};