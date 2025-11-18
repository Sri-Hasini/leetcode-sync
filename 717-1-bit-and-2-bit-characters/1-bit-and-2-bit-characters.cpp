class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for (int i = 0; i < bits.size(); i++) {
            if (i == bits.size() - 1) return true;
            if (bits[i] == 1 && (bits[i+1] == 1 || bits[i + 1] == 0)) i++;
        }
        return false;
    }
};