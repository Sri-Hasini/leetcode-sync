class Solution {
public:
    int reverseDegree(string s) {
        int val = 0;
        for (int i = 0; i< s.size(); i++) {
            val += ((26 - (s[i] - 'a')) * (i + 1));
        }
        return val;
    }
};