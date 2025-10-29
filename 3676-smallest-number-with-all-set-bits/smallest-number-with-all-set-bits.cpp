class Solution {
public:
    int smallestNumber(int n) {
        int x;
        for(int i = 0; i <= 10 ; i++) {
            if(pow(2,i) > n) {
                x = i;
                break;
            }
        }
        return pow(2,x)-1;
    }
};