#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int t,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&x);
        long long int m=x;
        while(m%2==0)
             m/=2;

        if(m==1)
            printf("-1\n");
        else
        {
            long long int pairs=x/m;
            long long int l=m/2-pairs+1;
            long long int r=m/2+pairs;
            if(l<1)
                l=llabs(l)+1;
            printf("%lld %lld\n",l,r);
        }
    }
}
