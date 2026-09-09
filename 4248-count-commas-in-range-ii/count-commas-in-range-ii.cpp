class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long s= 1000;
        int x = 1;
        while (s <= n) {
            long long e = s * 1000-1;
            long long l = min(n, e);
            ans += (l -s+1) * x;
            x++;
            s *=1000;
        }
        return ans;
    }
};