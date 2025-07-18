class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int sum = 0;
        for (int i = 0; i < cost.size(); i++) {
            if (i < cost.size() - 1) {
                sum += cost[i] + cost[i + 1];
                i += 2;
            }
            else {
                sum += cost[i];
            }
        }
        return sum;
    }
};