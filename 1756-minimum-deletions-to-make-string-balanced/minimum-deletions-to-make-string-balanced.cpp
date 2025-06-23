class Solution {
public:
    int minimumDeletions(string s) {
        int ans = 0, cnt = 0;
        for (auto i : s) {
            if (i == 'b') cnt++;
            else if (cnt) {
                ans++;
                cnt--;
            }
        }
        return ans;
    }
};