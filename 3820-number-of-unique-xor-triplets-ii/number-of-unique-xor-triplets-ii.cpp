class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        vector <bool> pair(2048);
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                pair[nums[i] ^ nums[j]] = true;
            }
        }
        vector <bool> triple(2048);
        for (int i = 0; i < pair.size(); i++) {
            if (pair[i]) {
                for (int j = 0; j < n; j++) {
                    triple[nums[j] ^ i] = true;
                }
            }
        }
        int cnt = 0;
        for (int i = 0; i < triple.size(); i++) {
            if (triple[i]) cnt++;
        }
        return cnt;
    }
};