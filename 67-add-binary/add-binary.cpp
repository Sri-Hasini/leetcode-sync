class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int n = a.size();
        int n1 = b.size();
        int size,result;
        // int x=stoi(a);
        // int y=stoi(b);
        // cout<<x<<" "<<y<<endl;
        string s;
        
        size = min(n1,n);
        char c = '0';
        int i;
        for(i=0; i<size; i++){
            if(a[i] == b[i] && a[i]=='1'){
                if(c=='1'){
                    s+='1';
                    c = '1';
                }
                else{
                    s+='0';
                    c = '1';
                }
            }
            else if(a[i]==b[i] && a[i] =='0'){
                if(c=='1'){
                    s+='1';
                    c = '0';
                }
                else{
                    s+='0';
                    c='0';
                }
            }
            else{
                if(c=='1'){
                    s+='0';
                    c ='1';
                }
                else{
                    s+='1';
                    c='0';
                }
            }
        }
       
        for(int j = i ; j < n ; j++){
            if(c=='1'){
                if(a[j]=='1'){
                    s+='0';
                    c = '1';
                }
                else{
                    s+='1';
                    c = '0';
                }
            }
            else{
                s+=a[j];
            }
        }
        for(int j = i ; j < n1 ; j++){
            if(c=='1'){
                if(b[j]=='1'){
                    s+='0';
                    c = '1';
                }
                else{
                    s+='1';
                    c = '0';
                }
            }
            else{
                s+=b[j];
            }
        }
        if(c=='1')s+=c;
        reverse(s.begin(),s.end());
        return s;
    }
};