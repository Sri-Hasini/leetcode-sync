class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string k;
        for (int i = 0; i < firstWord.size(); i++) {
            k += firstWord[i] - 'a' + '0';
        }
        if (k.size() != firstWord.size()) {
            for (int i = min(k.size(), firstWord.size()); i < max(k.size(), firstWord.size()); i++) {
                k += '0';
            }
        }
        string q;
        for (int j = 0; j < secondWord.size(); j++) {
            q += secondWord[j] - 'a' + '0';
        }
        if (q.size() != secondWord.size()) {
            for (int i = min(q.size(), secondWord.size()); i < max(q.size(), secondWord.size()); i++) {
                q += '0';
            }
        }
        int x = stoi(k) + stoi(q);
        string w;
        for (int j = 0; j < targetWord.size(); j++) {
            w += targetWord[j] - 'a' + '0';
        }
        int y = stoi(w);
        return (y == x);
    }
};