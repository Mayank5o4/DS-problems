class Solution {
public:
    struct Compare {
        bool operator()(const pair<int, string>& a,
                        const pair<int, string>& b) {
            if (a.first == b.first)
                return a.second > b.second;

            return a.first < b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& s, int k) {
        unordered_map<string, int> freq;
        for (auto x : s) {
            freq[x]++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, Compare>
            pq;
        for (auto i : freq) {
            pq.push({i.second, i.first});
        }
        vector<string> res;
        int i = 0;
        while (i < k) {
            res.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        return res;
    }
};