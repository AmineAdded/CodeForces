#include<stdio.h>
typedef struct
{
    long long x;
    long long y;
}Money;
int main()
{
    long long t;
    scanf("%lld",&t);
    Money tab[t];
    for(int i=0;i<t;i++)
        scanf("%lld %lld",&tab[i].x,&tab[i].y);
    for(int i=0;i<t;i++)
    {
        if(tab[i].x>=tab[i].y)
            printf("0\n");
        else
            printf("%lld\n",tab[i].y-tab[i].x);
    }
}
