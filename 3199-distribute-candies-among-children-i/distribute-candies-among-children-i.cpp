class Solution {
public:
    int distributeCandies(int n, int limit) {
        int cnt = 0;
        bool flag = true;
        for (int i = 0; i <= limit; i++) {
            for (int j = 0; j <= limit; j++) {
                flag = true;
                for (int k = 0; k <= limit; k++) {
                    if (i + j + k > n) {
                        flag = false;
                        break;
                    } 
                    else if (i + j + k == n)cnt++;
                }
            }
        }
        return cnt;
    }
};