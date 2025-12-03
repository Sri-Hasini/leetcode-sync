class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>answer;
        int i=0;
        int j=matrix[0].size()-1;
        int k=matrix.size()-1;
        int l=0;
        
        while(1){
            if(l>j){
                break;
            }
            for(int o=l;o<=j;o++){
                answer.push_back(matrix[i][o]);
            }
            i++;
            if(i>k){
                break;
            }
            for(int o=i;o<=k;o++){
                answer.push_back(matrix[o][j]);
            }
            j--;
            if(l>j){
                break;
            }
            for(int o=j;o>=l;o--){
                answer.push_back(matrix[k][o]);
            }
            k--;
            if(i>k){
                break;
            }
            for(int o=k;o>=i;o--){
                answer.push_back(matrix[o][l]);
            }
            l++;
            
        }
        return answer;
    }
};