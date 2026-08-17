class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> vec;
        for(auto x : nums){
            if(mp[x]<k){
                vec.push_back(x);
                mp[x]++;
            }
        }
        return vec;
    }
};