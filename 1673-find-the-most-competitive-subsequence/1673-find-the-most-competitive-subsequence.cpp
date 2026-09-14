class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        size_t n = nums.size();
        stack<int> st;
        int need = n - k;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && st.top() > nums[i] && need > 0) {
                st.pop();
                need--;
            }
            st.push(nums[i]);
        }
        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(begin(ans), end(ans));
        while (ans.size() > k) {
            ans.pop_back();
        }
        return ans;
    }
};