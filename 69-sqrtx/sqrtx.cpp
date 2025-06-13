class Solution {
public:
    int mySqrt(int x) {
            int ans,r,pro=1,q=0,copy;
        vector <int> primes={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        map <int,int> m;
        copy=x;
        vector <int>::iterator fac=primes.begin();
        while(x > 1 && fac!=primes.end()){
            if(x % *(fac) ==0 ){
                x=x / *(fac);
                m[*(fac)]++;
            }
            else{
                fac++;
            }
        }
        //the below line is used if the prime number is more than the above listed one
        if(x>1){
            m[x]++;
        }
        for(auto j:m){
            // cout<<j.first<<" "<<j.second<<endl;
            if(j.second % 2==0 && j.second!=1){
                int z=j.second/2;
                for(int k=1;k<=z;k++){
                    pro*=j.first;
                }
            }
            else{
                q=floor(sqrt(copy));
                pro=1;
                break;
            }
        }
        if(pro!=1){
            return pro;
        }
        else if(copy==1)return 1;
        else{
            return q;
        }
    }
};