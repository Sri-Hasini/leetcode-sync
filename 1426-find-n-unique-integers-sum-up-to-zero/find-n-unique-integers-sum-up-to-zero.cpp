class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> x;
        int n1 = n;
        if (n & 1) n1 -= 1;
        for (int i = 1; i < n1; i += 2) {
            x.push_back(i);
            x.push_back(-i);
        }
        if (n & 1) {
            x.push_back(0);
        }
        return x;
    }
};