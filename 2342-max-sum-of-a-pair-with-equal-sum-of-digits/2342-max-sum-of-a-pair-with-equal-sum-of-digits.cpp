class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, priority_queue<int>> mp;
        for(auto x : nums){
            int sum=0, p=x;
            while(p){
                sum+=p%10;
                p/=10;
            }
            mp[sum].push(x);
        }
        int res=-1;
        for(auto& x : mp){
            if(x.second.size()>1){
                int sum=x.second.top();
                x.second.pop();
                sum+=x.second.top();
                res=max(res, sum);
            }
        }
        return res;
    }
};