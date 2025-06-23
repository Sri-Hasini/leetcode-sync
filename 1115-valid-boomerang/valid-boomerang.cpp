class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        set<pair<int, int>> s;
        for (auto p : points) {
            s.insert({p[0], p[1]});
        }
        if (s.size() != 3) return false;
        int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];
        int cross = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
        return cross != 0;
    }
};
