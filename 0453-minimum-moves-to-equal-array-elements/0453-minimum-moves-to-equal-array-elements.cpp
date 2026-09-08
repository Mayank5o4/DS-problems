class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            cnt+=nums[i]-nums[0];
        }
        return cnt;
    }
};