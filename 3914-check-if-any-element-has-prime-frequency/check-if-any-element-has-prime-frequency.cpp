class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        set <int> primes;
        for (int i = 2; i <= 100; i++) {
            bool f = false;
            for (int j = 2; j <= sqrt(i); j++){
                if (i % j == 0) {
                    f = true;
                }
            }
            if (!f) primes.insert(i); 
        }
        unordered_map <int,int> m;
        for (auto i : nums) m[i]++;
        for (auto i : m) {
            if (primes.find(i.second) != primes.end()) return true;
        }
        return false;
    }
};