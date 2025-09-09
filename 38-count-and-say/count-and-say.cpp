class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        n--;
        while (n--) {
            string h = "";
            int i = 0;
            while(i < s.size()) {
                int cnt = 0;
                char ch = s[i];
                while (i < s.size() && ch == s[i]) {
                    cnt++;
                    i++;
                }
                h += cnt + '0';
                h += ch;
            }
            s = h;
        }
        return s;
    }
};