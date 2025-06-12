class Solution {
public:
    int minimumPushes(string word) {
        if (word.size() < 9) return word.size();
        int x = word.size() - 8;
        if (x < 9) return 8 + x * 2;
        x -= 8;
        if (word.size() <= 24)
        return 8 + 8 * 2 + x * 3;
        if (word.size() == 25) return 8 + 8 * 2 + 8 * 3 + 4;
        return 8 + 8 * 2 + 8 * 3 + 8;
    }
};