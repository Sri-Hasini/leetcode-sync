class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                string k = to_string(nums[i]);
                int first = k[0] - '0';
                int last = nums[j] % 10;
                if (gcd(first, last) == 1) cnt++;
            }
        }
        return cnt;
    }
};