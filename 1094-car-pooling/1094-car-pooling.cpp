class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size();
        vector<pair<int, int>> vec;
        for(int i=0; i<n; i++){
            vec.push_back({trips[i][1], trips[i][0]});
            vec.push_back({trips[i][2], -trips[i][0]});
        }
        sort(vec.begin(), vec.end());
        int ans=0;
        for(int i=0; i<vec.size(); i++){
            ans+=vec[i].second;
            if(ans>capacity){
                return false;
            }
        }
        return true;
    }
};