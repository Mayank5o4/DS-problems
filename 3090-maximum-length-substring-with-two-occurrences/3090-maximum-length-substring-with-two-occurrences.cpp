class Solution {
public:
    int maximumLengthSubstring(string s) {
        size_t ch = s.size();
        int i=0, j=0, len=0;
        vector<int> vec(26,0);
        while(j<ch){
            vec[s[j]-'a']++;
            while(vec[s[j]-'a']>2){
                vec[s[i]-'a']--;
                i++;
            }
            len=max(len, j-i+1);
            j++;
        }
        return len;
    }
};