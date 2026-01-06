class Solution {
public:
    int pivotInteger(int n) {
        vector <int> pre(n + 1), suf(n + 1);
        pre[1] = 1;
        suf[n] = n;
        for (int i = 2; i <= n; i++) {
            pre[i] = pre[i - 1] + i;
        }
        for (int i = n - 1; i >= 1; i--) {
            suf[i] = suf[i + 1] + i;
        }
        int ans = -1;
        for (int i = 1; i <= n; i++) {
            // cout << pre[i] << " " << suf[i] << endl;
            if (pre[i] == suf[i]) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};