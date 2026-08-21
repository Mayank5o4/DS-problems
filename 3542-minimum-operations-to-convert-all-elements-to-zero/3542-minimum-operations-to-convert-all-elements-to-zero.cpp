class Solution {
public:
    int minOperations(vector<int>& nums) {
        const size_t n = nums.size();
        int ops = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && st.top() > nums[i]) {
                st.pop();
            }
            if (nums[i] > 0 && (st.empty() || st.top() < nums[i])) {
                st.push(nums[i]);
                ops++;
            }
        }
        return ops;
    }
};