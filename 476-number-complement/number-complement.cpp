class Solution {
public:
    int findComplement(int num) {
        string k;
        while (num > 0) {
            if (num & 1) k += '0';
            else k += '1';
            num >>= 1;
        }
        int s = 0;
        for (int i = 0; i < k.size(); i++) {
            s += (k[i] == '1' ? pow(2, i) : 0);
        }
        return s;
    }
};