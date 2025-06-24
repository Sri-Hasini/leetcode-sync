class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        unordered_map <int,vector <int>> m;
        for (int i = 0; i < pick.size(); i++) {
            m[pick[i][0]].push_back(pick[i][1]);
        }
        int cnt = 0;
        for (auto i : m) {
            vector <int> v = i.second;
            unordered_map <int,int> x;
            for (auto j : v) x[j]++;
            for (auto j : x) {
                if (j.second >= i.first + 1) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};