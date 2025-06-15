class Solution {
public:
    bool isPalindrome(string s) {
        string h = "";
        for (auto i : s) {
            if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z') || (i >= '0' && i <= '9')) {
                if (i >= 'A' && i <= 'Z') h += (i + 32);
                else h += i;
            }
        }
        int left = 0, right = h.size() - 1;
        while (left <= right) {
            if (h[left] == h[right]) {
                left++;
                right--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};