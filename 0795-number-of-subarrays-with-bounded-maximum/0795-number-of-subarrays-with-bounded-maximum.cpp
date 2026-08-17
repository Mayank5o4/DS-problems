class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        const size_t n = nums.size();
        int i=0, j=0, mx=0, cnt=0;
        while(j<n){
            if(nums[j]>right){
                mx=0;
                i=j+1;
            }
            else if(nums[j]>=left && nums[j]<=right){
                mx=j-i+1;
            }
            cnt+=mx;
            j++;
        }
        return cnt;
    }
};