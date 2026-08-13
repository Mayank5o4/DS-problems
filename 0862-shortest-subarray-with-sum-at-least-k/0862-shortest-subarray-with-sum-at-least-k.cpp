class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        const size_t n = nums.size();
        deque<int> dq;
        vector<long long> ans(n,0);
        int res=INT_MAX;
        int j=0;
        while(j<n){
            if(j==0){
                ans[j]=nums[j];
            }else{
                ans[j]=ans[j-1]+nums[j];
            }
            if(ans[j]>=k){
                res=min(res, j+1);
            }
            while(!dq.empty() && ans[j]-ans[dq.front()]>=k){
                res=min(res, j-dq.front());
                dq.pop_front();
            }
            while(!dq.empty() && ans[j]<=ans[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(j);
            j++;
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;
    }
};