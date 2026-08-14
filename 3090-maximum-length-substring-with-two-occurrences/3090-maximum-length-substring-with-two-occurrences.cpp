class Solution {
public:
    int maximumLengthSubstring(string s) {
        size_t ch = s.size();
        int i=0, j=0, len=0;
        unordered_map<int, int> mp;
        while(j<ch){
            mp[s[j]]++;
            while(mp[s[j]]>2){
                mp[s[i]]--;
                i++;
            }
            len=max(len, j-i+1);
            j++;
        }
        return len;
    }
};