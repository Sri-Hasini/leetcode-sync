class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        vector<vector<int>> x;

        // Frequency array for each word
        for (int i = 0; i < words.size(); i++) {
            vector<int> y(26);
            for (int j = 0; j < words[i].size(); j++) {
                y[words[i][j] - 'a']++;
            }
            x.push_back(y);
        }

        // For each character from 'a' to 'z'
        for (int ch = 0; ch < 26; ch++) {
            int mini = INT_MAX;

            // Find the minimum frequency of current character in all words
            for (int i = 0; i < x.size(); i++) {
                mini = min(mini, x[i][ch]);
            }

            // Add the character 'mini' times to the answer
            for (int k = 0; k < mini; k++) {
                ans.push_back(string(1, 'a' + ch));
            }
        }

        return ans;
    }
};
