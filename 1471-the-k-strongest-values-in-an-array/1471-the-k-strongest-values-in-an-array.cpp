class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        size_t n = arr.size();
        int i = 0, j = n - 1;
        sort(begin(arr), end(arr));
        int c = arr[(n - 1) / 2];
        vector<int> ans;
        while (ans.size() < k) {
            if (abs(arr[i] - c) > abs(arr[j] - c)) {
                ans.push_back(arr[i]);
                i++;
            } else if (abs(arr[i] - c) < abs(arr[j] - c)) {
                ans.push_back(arr[j]);
                j--;
            } else {
                if (abs(arr[i] - c) == abs(arr[j] - c) && arr[i] > arr[j]) {
                    ans.push_back(arr[i]);
                    i++;
                } else {
                    ans.push_back(arr[j]);
                    j--;
                }
            }
        }
        return ans;
    }
};