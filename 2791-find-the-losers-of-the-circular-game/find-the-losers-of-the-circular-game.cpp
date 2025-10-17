class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector <int> ans;
        int cnt = 1, cur = 1;
        vector <int> a(n + 1);
        a[1] = 1;
        while (a[cur] != 2) {
            a[(cur + (cnt * k)) % n]++;
            cur = (cur + (cnt * k)) % n;
            // cout << cur;
            cnt++;
        }
        a[a.size() - 1] = a[0];
        for (int i = 1; i < a.size(); i++) {
            if (a[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};