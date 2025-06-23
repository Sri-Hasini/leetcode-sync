class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map <int,int> m;
        for (int i = 0; i < tasks.size(); i++) {
            m[tasks[i]]++;
        }
        int cnt = 0;
        for (auto i : m) {
            if (i.second % 3 == 0) {
                cnt += i.second / 3;
                continue;
            }
            if (i.second % 3 == 1) {
                if (i.second >= 4) {
                    cnt += (i.second / 3) + 1;
                }
                else return -1;
            }
            else if (i.second % 3 == 2) {
                cnt += i.second / 3 + 1;
            }
        }
        return cnt;
    }
};