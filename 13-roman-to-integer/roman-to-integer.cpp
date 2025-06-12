class Solution {
public:
    int romanToInt(string s) {
        map <char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int sum=0;
        int j,g=0,h=0;
        int size=s.length();
        for(j=size-1;j>=0;j--){
            g=m[s[j]];
            sum+=g;
            if (j > 0) {
                h=m[s[j-1]];
                if(g>h){
                    sum-=h;
                    // cout<<sum<<endl;
                j--;
                }    
            }
            // cout<<g<<" " <<h<<" " <<sum<<endl;
            
        }
        return sum;
    }
};