class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> mapping(26, 0);
        for (char ch : word) mapping[ch - 'a']++;
        for (int &val : mapping) {
            val--;
            set<int> st;
            for (int &val : mapping) if (val) st.insert(val);
            if (st.size() == 1) return true;
            val++;
        }
        return false;
    }
};