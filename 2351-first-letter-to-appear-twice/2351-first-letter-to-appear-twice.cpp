class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> store;
        for (auto ch : s) {
            if (store.count(ch)) {
                return ch;
            }
            store.insert(ch);
        }
        return ' ';
    }
};