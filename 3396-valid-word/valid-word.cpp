class Solution {
public:
    bool isValid(string word) {
        bool isvowel = false;
        bool isconsonant = false;
        set <char> s = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for (int i = 0; i < word.size(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z' || (word[i] >= 'a' && word[i] <= 'z')) {
                if (s.find(word[i]) != s.end()) isvowel = true;
                else isconsonant = true;

            }
            else if (word[i] >= '0' && word[i] <= '9') {
                continue;
            }
            else return false;
        }
        if (word.size() >= 3 && isvowel && isconsonant) return true;
        return false;
    }
};