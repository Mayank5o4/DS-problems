class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        const size_t n = nums.size();
        unordered_map<int, int> mp;
        int i=0, j=0, maxf=0, res=0;
        while(j<n){
            mp[nums[j]]++;
            maxf=max(maxf, mp[nums[j]]);
            while((j-i+1)-maxf>k){
                mp[nums[i]]--;
                i++;
            }
            res=max(res, maxf);
            j++;
        }
        return res;
    }
};