class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int> st;
        int n = nums.size();
        int i=n-1;
        while(i>=0){
            if(st.find(nums[i])!=st.end()){
                return (i+3)/3;
            }
            st.insert(nums[i]);
            i--;
        }
        return 0;
    }
};