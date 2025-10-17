class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        vector <int> pre(arr.size());
        pre[0] = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            pre[i] = pre[i - 1] ^ arr[i];
        }
        vector <int> ans;
        for (int i = 0; i < q.size(); i++) {
            int val = pre[q[i][1]];
            cout << val << " ";
            if (q[i][0] > 0) {
                val ^= pre[q[i][0] - 1];
            }
            ans.push_back(val);
            cout << val << endl;
        }
        return ans;
    }
};