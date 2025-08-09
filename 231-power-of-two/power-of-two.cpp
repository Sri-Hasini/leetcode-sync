class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt = 0;
        for(int i = 31; i >= 0; i--) {
            if((n&(1<<i)) != 0) cnt++;
        }
        cout << cnt <<endl;
        if(n >= 0 && cnt == 1) {
            return true;
        }
        return false;
    }
};