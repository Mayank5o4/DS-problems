class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int p) {
        size_t n = nums.size();
        int i=0, j=0, sum=0 ,cnt=0;
        while(j<n){
            sum+=nums[j];
            if(j-i+1==k){
                if(sum/k>=p){
                    cnt++;
                }
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return cnt;
    }
};