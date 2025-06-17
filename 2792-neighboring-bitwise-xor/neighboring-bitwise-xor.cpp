class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int cnt_1 = 0;
        for (int i = 0; i < derived.size(); i++) {
            if (derived[i] == 1) cnt_1++;
        }
        if (cnt_1 % 2 == 0) return true;
        return false;
    }
};