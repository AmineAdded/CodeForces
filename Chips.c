#include<stdio.h>
int main()
{
    int n;
    long long int m;
    scanf("%d %lld",&n,&m);
    int valid=1;
    while(valid)
    {
        int i=1;
        while(i<=n)
        {
            if(m>=i)
            {
                m-=i;
                i++;
            }
            else
            {
                valid=0;
                break;
            }
        }
    }
    printf("%lld",m);
}
