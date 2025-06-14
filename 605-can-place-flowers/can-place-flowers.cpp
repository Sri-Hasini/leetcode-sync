class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 1) {
            if (flowerbed[0] == 0) {
                if (n <= 1) return true;
                return false;
            }
            if (n == 0) return true;
            return false;
        }
        vector <int> copy(flowerbed.begin(), flowerbed.end());
        int cnt = 0;
        for (int i = 0; i < copy.size() - 1; i++) {
            if (copy[i] == 0 && copy[i + 1] == 0 && i == 0) {
                copy[i] = 1;
                cnt++;
            }
            else if (i != 0 && copy[i] == 0 && copy[i - 1] == 0 && copy[i + 1] == 0) {
                copy[i] = 1;
                cnt++;
            }
        }
        if (copy[copy.size() - 1] == 0 && copy[copy.size() - 2] == 0) cnt++;
        return (cnt >= n);
    }
};