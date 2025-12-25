class Solution {
public:
    int fun(vector <pair<int,int>> &v, int n) {
        int low = 0, high = v.size() - 1, ind = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid].first >= n) {
                ind = v[mid].second;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ind;
    }
    vector<int> findRightInterval(vector<vector<int>>& in) {
        vector <pair<int,int>> v;
        for (int i = 0; i < in.size(); i++) {
            v.push_back({in[i][0], i});
        }
        sort(v.begin(), v.end());
        vector <int> ans;
        for (int i = 0; i < in.size(); i++) {
            ans.push_back(fun(v, in[i][1]));
        }
        return ans;
    }
};