class Solution {
public:
    static bool compare(const string& a, const string& b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for (auto x : nums) {
            ans.push_back(to_string(x));
        }
        sort(ans.begin(), ans.end(), compare);
        if (ans[0] == "0")
            return "0";
        string maximum = "";
        for (auto num : ans) {
            maximum += num;
        }
        return maximum;
    }
};