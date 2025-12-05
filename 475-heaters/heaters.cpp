class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int cur = 0, r = 0;
        for (auto h : houses) {
            while ((cur + 1 < heaters.size()) && (abs(heaters[cur + 1] - h) <= abs(heaters[cur] - h))) cur++;
            r = max(r, abs(heaters[cur] - h));
        }
        return r;
    }
};