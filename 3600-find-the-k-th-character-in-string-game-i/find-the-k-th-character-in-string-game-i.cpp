class Solution {
public:
    char kthCharacter(int k) {
        string h ="a";
        int n = 1;
        while (n <= k) {
            for (int i = 0; i < n; i++) {
                if(h[i] == 'z') h.push_back('a');
                else {
                    h.push_back(h[i]+1);
                }
            }
            n = h.size();
        }
        return h[k-1];
    }
};