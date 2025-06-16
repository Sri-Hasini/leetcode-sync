class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0], ans = INT_MIN;
        for (int i = 1; i < prices.size(); i++) {
            if (mini > prices[i]) {
                mini = prices[i];
            }
            else {
                ans = max(ans, prices[i] - mini);
            }
        }
        return (ans == INT_MIN) ? 0 : ans;
    }
};