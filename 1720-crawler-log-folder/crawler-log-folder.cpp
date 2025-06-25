class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for (int i = 0; i < logs.size(); i++) {
            if (logs[i] != "../" && logs[i] != "./") cnt++;
            else if (logs[i] == "../") cnt = max(0, cnt - 1);
        }
        return cnt;
    }
};