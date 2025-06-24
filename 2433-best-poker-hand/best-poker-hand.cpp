class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map <int,int> m;
        for (auto i : ranks) m[i]++;
        map <int,int> m1;
        for (auto i : suits) m1[i]++;
        if (m1.size() == 1) return "Flush";
        for (auto i : m) {
            if (i.second >= 3) return "Three of a Kind";
        }
        for (auto i : m) {
            if (i.second == 2) return "Pair";
        }
        return "High Card";
    }
};