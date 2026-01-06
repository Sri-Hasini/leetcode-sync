class Solution {
public:
    int cnt_div(int n) {
        int cnt = 2, sum = 1 + n;
        for (int i = 2; i * i <= n; i++) {
            if (i * i == n) {
                cnt++;
                sum += i;
            }
            else if (n % i == 0) {
                cnt+=2;
                sum += i;
                sum += n/i;
            }
        }
        if (cnt == 4) return sum;
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt += cnt_div(nums[i]);
        }
        return cnt;
    }
};