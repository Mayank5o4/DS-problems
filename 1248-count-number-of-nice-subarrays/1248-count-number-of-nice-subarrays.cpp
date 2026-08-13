class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        const size_t n = nums.size();
        int i=0, j=0, oddcnt=0, prev=0;
        int res=0;
        while(j<n){
            if(nums[j]%2!=0){
                oddcnt++;
                prev=0;
            }
            while(oddcnt==k){
                prev++;
                if(nums[i]%2!=0){
                    oddcnt--;
                }
                i++;
            }
            res+=prev;
            j++;
        }
        return res;
    }
};