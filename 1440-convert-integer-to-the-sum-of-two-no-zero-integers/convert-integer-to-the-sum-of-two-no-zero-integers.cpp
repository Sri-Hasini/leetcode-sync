class Solution {
public:
    bool fun(int n) {
        while (n > 0) {
            int r = n % 10;
            if (r == 0) return 0;
            n /= 10;
        }
        return 1;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector <int> ans;
        for (int i = 1; i <= (n/2); i++) {
            if (fun(i) && fun(n - i)) {
                ans.push_back(i);
                ans.push_back(n - i);
                break;
            }
        }
        return ans;
    }
};