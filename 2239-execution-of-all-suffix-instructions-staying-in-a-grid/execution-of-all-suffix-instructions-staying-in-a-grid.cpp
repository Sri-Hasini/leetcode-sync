class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        const int sz = s.length();
        vector<int> res(sz , 0);
        for(int i = 0; i < sz; ++i) {
            int count = 0;
            int x = startPos[0], y = startPos[1];
            for(int j = i; j < sz; ++j, ++count){
                char move = s[j];
                if(move == 'U') --x;
                else if(move == 'D') ++x;
                else if(move == 'L') --y;
                else ++y;
                if(x < 0 || y < 0 || x == n || y == n) break;
            }
            res[i] = count;
        }
        return res;
    }
};