class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map <int,int> m;
        for (auto i : nums) {
            m[i]++;
        }
        vector <int> a;
        for (auto i : nums) {
            if (m[i] == 1 && m.find(i - 1) == m.end() && m.find(i + 1) == m.end()) a.push_back(i);
        }
        return a;
    }
};