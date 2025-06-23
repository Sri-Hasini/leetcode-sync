class Solution {
public:
    // Check if a number is a palindrome in base k
    bool fun(long long n, int k) {
        string k1;
        while (n > 0) {
            k1 += to_string(n % k);
            n /= k;
        }
        string h = k1;
        reverse(h.begin(), h.end());
        return (h == k1);
    }

    long long kMirror(int k, int n) {
        long long sum = 0, cnt = 0;

        for (int len = 1; cnt < n; len++) {
            long long start = pow(10, (len - 1) / 2);
            long long end = pow(10, (len + 1) / 2);

            for (long long half = start; half < end && cnt < n; half++) {
                string left = to_string(half);
                string right = left;

                if (len % 2 == 1) right.pop_back();
                reverse(right.begin(), right.end());

                string full = left + right;
                long long num = stoll(full);

                if (fun(num, k)) {
                    sum += num;
                    cnt++;
                }
            }
        }

        return sum;
    }
};
