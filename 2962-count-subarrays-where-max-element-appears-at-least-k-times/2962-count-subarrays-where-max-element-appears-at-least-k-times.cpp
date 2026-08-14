class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        size_t n = nums.size();
        long maxele=*max_element(begin(nums), end(nums));
        long i=0, j=0, maxcnt=0, cnt=0;
        while(j<n){
            if(nums[j]==maxele){
                maxcnt++;
            }
            while(maxcnt>=k){
                if(nums[i]==maxele){
                    maxcnt--;
                }
                i++;
            }
            cnt+=i;
            j++;
        }
        return cnt;
    }
};