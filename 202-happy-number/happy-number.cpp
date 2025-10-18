class Solution {
public:
    int fun(int n) {
        int sum = 0;
        while (n > 0) {
            int r = n % 10;
            sum += r * r;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = fun(n);
        while (fast != 1 && slow != fast) {
            slow = fun(slow);
            fast = fun(fun(fast));
        }    
        return fast == 1;
    }
};