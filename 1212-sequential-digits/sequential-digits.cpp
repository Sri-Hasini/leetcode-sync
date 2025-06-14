class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int s1 = log10(low) + 1, s2 = log10(high) + 1;
        vector <int> v;
        string x = "123456789";
        for (int i = s1; i <= s2; i++) {
            int j = 0;
            string h = "";
            while (j <= 9 - i) {
                h = x.substr(j++, i);
                v.push_back(stoi(h));
            }
        }
        vector <int> ans;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] >= low && v[i] <= high)
            ans.push_back(v[i]);
        }
        return ans;
    }
};
/*
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>t;
        int l=log10(low)+1;
        int l1=log10(high)+1;
        int a=0;
        int i=1;
        for(int j=0;j<l;j++) {
            a=a*10+i;
            i++;
        }
        if(a>=low && a<=high) t.push_back(a);
        i=2;
        while(a<=high && l<=l1) {
            if(a%10==9) {
                i=1;
                l++;
            }
            a=0;
            int k=i;
            for(int j=0;j<l;j++){
                a=a*10+k;
                k++;
            }
            if(a>=low && a<=high) t.push_back(a);
            else if(a>high) break;
            i++;
        }
        return t;
    }
};
*/