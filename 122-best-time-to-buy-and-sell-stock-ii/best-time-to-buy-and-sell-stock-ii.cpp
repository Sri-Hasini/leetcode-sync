class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, x = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (x < prices[i]) {
                ans += prices[i] - x;
                x = prices[i];
            }
            else {
                x = prices[i];
            }
        }
        return ans;
    }
};