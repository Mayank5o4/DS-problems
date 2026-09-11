class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                for (int k = 0; k < nums.size(); k++) {
                    if (i == j || j == k || i == k) {
                        continue;
                    }
                    if (nums[i] == 0)
                        continue;
                    int num = nums[i] * 100 + nums[j] * 10 + nums[k];
                    if (num % 2 == 0) {
                        st.insert(num);
                    }
                }
            }
        }
        return st.size();
    }
};