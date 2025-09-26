class Solution {
public:
    int binaryGap(int n) {
        int maxi = 0;
        string k;
        while (n > 0) {
            if (n & 1)  k += '1';
            else k += '0';
            n >>= 1;
        }
        for (int i = 0; i < k.size(); i++) {
            if (k[i] == '1') {
                for (int j = i + 1; j < k.size(); j++) {
                    if (k[j] == '1') {
                        maxi = max(maxi, j - i);
                        i = j - 1;
                        break;
                    }
                    else if (j == k.size() - 1) {
                        i = j - 1;
                        break;
                    }
                }
            }
        }
        return maxi;
    }
};