class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map <int,int> m1, m2;
        for (auto i : target) m1[i]++;
        for (auto i : arr) m2[i]++;
        return m1 == m2;
    }
};