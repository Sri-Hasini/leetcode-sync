class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map <char,int> m;
        for (auto i : s) {
            m[i]++;
        }
        unordered_map <int, string> k;
        for (auto i : m) {
            k[i.second] += i.first;
        }
        int maxi = 0;
        for (auto i : k) {
            int n = i.second.size();
            maxi = max(maxi, n);
        }
        int ma = 0;
        for (auto i : k) {
            if (i.second.size() == maxi) {
                ma = max(ma, i.first);
            }
        }
        return k[ma];
    }
};