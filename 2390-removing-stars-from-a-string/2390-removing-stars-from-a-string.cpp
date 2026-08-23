class Solution {
public:
    string removeStars(string s) {
        size_t n = s.size();
        stack<char> st;
        int i = 0;
        string ans;
        while (i < n) {
            char ch = s[i];
            if (ch == '*') {
                st.pop();
            } else {
                st.push(ch);
            }
            i++;
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};
