class Solution {
public:
    bool isFascinating(int n) {
        string ans;
        ans += to_string(n);
        int a = 2 * n, b = 3 * n;
        ans += to_string(a);
        ans += to_string(b);
        string h = "123456789";
        sort(ans.begin(), ans.end());
        return ans == h;
    }
};