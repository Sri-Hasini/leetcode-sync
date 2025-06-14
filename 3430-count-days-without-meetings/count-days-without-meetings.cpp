class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int ans = 0, maxi = meetings[0][1];
        for (int i = 1; i < meetings.size(); i++) {
            // ans += (meetings[i][0] > meetings[i - 1][1]) ? meetings[i][0] - meetings[i - 1][1] - 1 : 0;
            ans += (meetings[i][0] > maxi) ? meetings[i][0] - maxi - 1: 0;
            maxi = max(maxi,max(meetings[i][1], meetings[i - 1][1]));
            cout << ans;
        }
        ans += days - maxi;
        ans += abs(1 - meetings[0][0]);
        return ans;
    }
};