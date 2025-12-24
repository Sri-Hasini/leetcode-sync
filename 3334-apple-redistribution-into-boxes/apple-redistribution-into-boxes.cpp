class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());
        int sum = accumulate(apple.begin(), apple.end(), 0);
        int cnt = 0;
        int x = 0;
        for (int i = 0; i < capacity.size(); i++) {
            x += capacity[i];
            if (x >= sum) {
                return i + 1;
                break;
            }
        }
        return 0;
    }
};