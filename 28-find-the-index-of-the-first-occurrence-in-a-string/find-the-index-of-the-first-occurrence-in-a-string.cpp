class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = 0;
        int l = 0;
        int hs = haystack.size();
        int ns = needle.size();
        while(l <= hs-ns) {
            if (haystack[l] == needle[0]) {
                int x = 0;
                for (int k = 0; k < ns; k++) {
                    if (haystack[l+k] == needle[k]) {
                        x++;
                    }
                }
                if (x == ns) return l;
            }
            l++;
        }
        return -1;
    }
};