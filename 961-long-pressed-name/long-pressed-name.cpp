class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0, k = 0;
        if (name[0] != typed[0]) return false;
        while (i < name.size() && j < typed.size()) {
            if (name[i] == typed[j]) {
                i++;
                j++;
                k++;
            }
            else {
                if (i != 0 && name[i - 1] != typed[j]) break;
                j++;
            }
        }
        bool g = true;
        for (int q = j; q < typed.size(); q++) {
            if (typed[j - 1] != typed[q]) {
                g = false;
                break;
            }
        }
        if (k == name.size() && g) return true;
        return false;
    }
};