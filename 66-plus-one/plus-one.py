class Solution(object):
    def plusOne(self, digits):
        n=len(digits)
        b=[]
        for i in range(n-1,-1,-1):
            b.append(digits[i])
        sum=0
        for j in range(0,n):
            x=10**j
            sum+=(x*b[j])
        sum+=1
        c=[]
        while sum>0:
            r=sum%10
            c.append(r)
            sum//=10
        z=list(reversed(c))
        return z
        