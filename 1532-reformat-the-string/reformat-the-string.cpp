class Solution {
public:
    string reformat(string s) {
        int c1 = 0, c2 = 0;
        string k1, k2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                c1++;
                k1 += s[i];
            }
            else {
                c2++;
                k2 += s[i];
            }
        }
        if (abs(c1 - c2) <= 1) {
            string h;
            if(c1 >= c2) {
                int i = 0, j = 0;
                while (j < k2.size()) {
                    h += k1[i++];
                    h += k2[j++];
                }
                if (c1 > c2)
                h += k1[i];
            }
            else {
                int i = 0, j = 0;
                while (i < k1.size()) {
                    h += k2[j++];
                    h += k1[i++];
                }
                if (c2 > c1)
                h += k2[j];
            }
            return h;
        }
        return "";
    }
};