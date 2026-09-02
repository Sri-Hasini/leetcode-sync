class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int e = 0, o = 0;
        for (auto i : nums) {
            if (i %  2 == 0) e++;
            else o++;
        }
        bool ev = (e > 0);
        bool od = (o > 0);
        return ev || od;
    }
};