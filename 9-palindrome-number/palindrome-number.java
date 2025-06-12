class Solution {
    public boolean isPalindrome(int x) {
        int rev=0,r,a;
        if(x>=0){
        a=x;
        while(x!=0){
            r=x%10;
            rev=rev*10+r;
            x/=10;
        }
        if(a==rev)return true;
        else return false;
        }
        else return false;
    }
}