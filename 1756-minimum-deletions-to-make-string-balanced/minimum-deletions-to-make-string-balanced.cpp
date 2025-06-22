class Solution {
public:
    int minimumDeletions(string s) {
        int cnt = 0, b = 0;
        for(auto i : s){
            if(i == 'b') b++;
            else cnt = min(cnt + 1, b);
        }
        return cnt;
    }
};