class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(), letters.end());
        char mini = 'z';
        for (int i = 0; i < letters.size(); i++) {
            if (target < letters[i]) {
                mini = min(mini, letters[i]);
            }
        }
        if (letters[letters.size() - 1] <= target || target == 'z') return letters[0];
        return mini;
    }
};