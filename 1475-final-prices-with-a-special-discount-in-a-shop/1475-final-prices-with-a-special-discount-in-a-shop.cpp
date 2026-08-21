class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        stack<int> st;
        const size_t n = nums.size();
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                nums[st.top()] -= nums[i];
                st.pop();
            }
            st.push(i);
        }
        return nums;
    }
};