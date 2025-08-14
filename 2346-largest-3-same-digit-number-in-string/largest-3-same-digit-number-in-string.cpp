class Solution {
public:
    string largestGoodInteger(string num) {
        vector <string> s;
        for (int i = 1; i < num.size() - 1; i++) {
            if (num[i - 1] == num[i] && num[i] == num[i + 1]) {
                string x = "";
                x += num[i - 1];
                x += num[i];
                x += num[i + 1];
                s.push_back(x);
            }
        }
        if (s.size() == 0) return "";
        else if (s.size() == 1) return s[0];
        string maxi = "000";
        for (int i = 0; i < s.size(); i++) {
            maxi = max(maxi, s[i]);
        }
        return maxi;
    }
};