class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector <int> m(value);
        for (int i = 0; i < nums.size(); i++) {
            int val = ((nums[i] % value) + value ) % value;
            m[val]++;
        }
        for (auto i : m) cout << i << " ";
        int i = 0;
        while(m[i % value] > 0) {
            m[(i % value)]--;
            i++;
        }
        return i;
    }
};