class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi = INT_MIN;
        for (int i = 0; i < strs.size(); i++) {
            bool d = true;
            for (int j = 0; j < strs[i].size(); j++) {
                if (strs[i][j] >= 'a' && strs[i][j] <= 'z') {
                    d = false;
                    break;
                }
            }
            if (d) {
                maxi = max(maxi, stoi(strs[i]));
            }
            else {
                int n = strs[i].size();
                maxi = max(maxi, n);
            }
        }
        return maxi;
    }
};