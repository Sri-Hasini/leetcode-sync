class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end(), greater<int> ());
        long long cnt = 0;
        long long j = 0;
        for (int i = 0; i < h.size(); i++) {
            if (k > 0) {
                if (h[i] - j > 0) {
                    cnt += h[i] - j;
                }
                j++;
                k--;
            }
        }
        return cnt;
    }
};