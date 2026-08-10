class Solution {
public:
    int seive[5000001];

    void primes(int x){
        // for (int i = 0; i <= 10; i++) cout << seive[i] << " ";
        seive[0] = seive[1] = 1;
        for (long long i = 2; i * i <= x; i++) {
            if (seive[i] == 0) {
                for (long long j = i * i; j < x; j+=i) {
                    seive[j] = 1;
                }
            }
        }
    }
    int countPrimes(int n) {
        primes(n);
        int cnt = 0;
        for (int i = 2; i < n; i++) {
            if (seive[i] == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};