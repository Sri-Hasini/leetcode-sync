class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int m=a.size(),i=0,j=0,k;
        int n=a[0].size();
        vector<int>ans;
        while(m>1&&n>1){
            for(k=1;k<=(n-1);k++){
                ans.push_back(a[i][j]);
                j++;
            }
            for(k=1;k<=(m-1);k++){
                ans.push_back(a[i][j]);
                i++;
            }
            for(k=1;k<=(n-1);k++){
                ans.push_back(a[i][j]);
                j--;
            }
            for(k=1;k<=(m-1);k++){
                ans.push_back(a[i][j]);
                i--;
            }
            m=m-2;
            n=n-2;
            i++;
            j++;
        }
        if(n==1){
            while(m--){
                ans.push_back(a[i][j]);
                i++;
            }
        }
        else if(m==1){
            while(n--){
                ans.push_back(a[i][j]);
                j++;
            }
        }
        return ans;
    }
};