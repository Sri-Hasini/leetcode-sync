class Solution {
public:
    int distributeCandies(vector<int>& c) {
        set<int> x(c.begin(), c.end());
        return min((int)x.size(), ((int)c.size())/2);
    }
};