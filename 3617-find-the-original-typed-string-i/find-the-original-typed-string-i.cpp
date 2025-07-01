class Solution {
public:
    int possibleStringCount(string word) {
        int ans = 1;
        for (int i = 0; i < word.size(); i++){
            int cnt = 0;
            for (int j = i + 1; j < word.size(); j++) {
                if (word[i] == word[j]) cnt++;
                else {
                    i = j - 1;
                    break;
                }
                if (j < word.size()) i = j - 1;
            }
            cout << cnt;
            ans += cnt;
        }
        return ans;
    }
};