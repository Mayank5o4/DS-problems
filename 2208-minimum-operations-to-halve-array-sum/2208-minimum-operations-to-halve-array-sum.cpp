class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        double sum = 0;
        int cnt = 0;
        for (auto num : nums) {
            pq.push(num);
            sum += num;
        }
        double half = sum / 2;
        while (sum > half) {
            cnt++;
            double num = pq.top();
            pq.pop();
            sum -= num / 2;
            pq.push(num / 2);
        }
        return cnt;
    }
};