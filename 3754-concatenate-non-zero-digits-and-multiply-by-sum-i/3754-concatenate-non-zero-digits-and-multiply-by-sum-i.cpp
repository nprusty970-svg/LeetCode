class Solution {
public:
    long long sumAndMultiply(int n) {
       long long  x=0,sum=0;
        int digit;
        long long place=1;
        while(n!=0)
        {
            digit=n%10;
            if(digit!=0)
            {
            x+=digit*place;
            place*=10;
            }
            
            n=n/10;
        }
        long long temp=x;
        while(temp!=0)
        {
            sum+=(temp%10);
            temp=temp/10;
        }
        return sum*x;
    }
};