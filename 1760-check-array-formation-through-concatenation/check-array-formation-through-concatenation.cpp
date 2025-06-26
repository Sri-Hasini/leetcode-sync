class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, vector<int>> mp;
        for (int i = 0, m = pieces.size(); i < m; ++i) mp[pieces[i][0]] = pieces[i];
        int i = 0, n = arr.size();
        while (i < n) {
            if (mp.find(arr[i]) == mp.end()) return false;
            const vector<int>& piece = mp[arr[i]];
            for (int j = 0, k = piece.size(); j < k; ++j, ++i) {
                if (arr[i] != piece[j]) return false;
            }
        }
        return true;
    }
};