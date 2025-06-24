class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        bool by = false, hy = false;
        if (l >= 10000 || w >= 10000 || h >= 10000) by = true;
        long long val = l;
        if (val * w * h >= 1e9) by = true;
        if (m >= 100) hy = true;
        if (by && hy) return "Both";
        if (!by && !hy) return "Neither";
        if (by && !hy) return "Bulky";
        return "Heavy";
    }
};