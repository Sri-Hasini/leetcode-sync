class Solution {
public:
    string invert(string h) {
        string ans;
        for (int i = 0; i < h.size(); i++) {
            if (h[i] == '0') ans += '1';
            else ans += '0';
        }
        return ans;
    }
    string rev(string h) {
        reverse(h.begin(), h.end());
        return h;
    }
    char findKthBit(int n, int k) {
        string pre = "0", cur = "";
        n--;
        while (n--) {
            cur += pre;
            cur += "1";
            string k = invert(pre);
            cur += rev(k);
            pre = cur;
            cur = "";
        }
        return pre[k - 1];
    }
};