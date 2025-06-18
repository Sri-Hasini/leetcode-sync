class Solution {
public:
    int minTimeToType(string word) {
        int ans = word.size();
        int x = (word[0] - 'a');
        int y = 26 - x;
        ans += min(x, y);
        for (int i = 1; i < word.size(); i++) {
            x = abs((word[i] - 'a') - (word[i - 1] - 'a'));
            y = 26 - x;
            ans += min(x, y);
        }
        return ans;
    }
};