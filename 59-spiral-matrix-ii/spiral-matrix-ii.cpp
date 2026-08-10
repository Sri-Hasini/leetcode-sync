class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int i=0,j=0,d=1,k;
        vector<vector<int>>v(n,vector<int>(n));
        while(n>1){
            for(k=1;k<=(n-1);k++){
                v[i][j]=d;
                d++;
                j++;
            }
            for(k=1;k<=(n-1);k++){
                v[i][j]=d;
                d++;
                i++;
            }
            for(k=1;k<=(n-1);k++){
                v[i][j]=d;
                d++;
                j--;
            }
            for(k=1;k<=(n-1);k++){
                v[i][j]=d;
                d++;
                i--;
            }
            n=n-2;
            i++;
            j++;
        }
        if(n%2!=0)
        v[i][i]=d;
    return v;
    }
};