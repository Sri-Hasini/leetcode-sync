class Solution {
public:
    bool isPalindrome(string s) {
        string h;
        int n=s.size();
        // cout<<n<<endl<<s;
        char *i=&s[0];
        char *j=&s[0]+n-1;
        char z;
        // cout<<n<<" "<<*i<<" "<<*j<<endl;
        if(n==1){
            return true;
        }
        else{
            while(i<=j){
                // cout<<*i<<endl;
                if((*i>='A' && *i<='Z')||(*i>='a' && *i<='z')||(*i>='0' && *i<='9')){
                    if(*i>='A' && *i<='Z'){
                        z=*i+32;
                        // cout<<*i<<" "<<z<<endl;
                        h+=z;
                        i++;
                        continue;
                    }
                    h+=*i;
                }
                
                i++;
            }
            int n1=h.size();
            if(n1<=1) return true;
            char *k=&h[0];
            char *q=&h[0]+n1-1;
            bool g=false;
            while(k<q){
                if(*k==*q){
                    k++;
                    q--;
                    g=true;
                    continue;
                }
                else{
                    g=false;
                    break;
                }
            }
            return g;
        }
    }
};