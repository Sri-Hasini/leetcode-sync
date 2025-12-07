class Solution {
public:
    vector<int> closestDivisors(int num) {
        int num1 = num + 1, num2 = num + 2;
        int a, b, c, d;
        for (int i = sqrt(num1); i >= 1; i--) {
            if (num1 % i == 0) {
                a = i;
                b = num1 / i;
                break;
            }
        }
        for (int i = sqrt(num2); i >= 1; i--) {
            if (num2 % i == 0) {
                c = i;
                d = num2 / i;
                break;
            }
        }
        if (abs(a - b) <= abs(c - d)) return {a, b};
        return {c, d};
    }
};