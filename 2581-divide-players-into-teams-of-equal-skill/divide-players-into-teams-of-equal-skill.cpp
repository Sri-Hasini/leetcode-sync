class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int val = skill[0] + skill[skill.size() - 1];
        vector <pair<int,int>> v;
        v.push_back({skill[0], skill[skill.size() - 1]});
        int i = 1, j = skill.size() - 2;
        while (i < j) {
            if (val == skill[i] + skill[j]) {
                v.push_back({skill[i], skill[j]});
            }
            else return -1;
            i++, j--;
        }
        long long ans = 0LL;
        for (int i = 0; i < v.size(); i++) {
            ans += (v[i].first * v[i].second);
        }
        return ans;
    }
};