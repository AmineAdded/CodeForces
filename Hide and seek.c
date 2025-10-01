#include<stdio.h>
typedef struct
{
    long long int n;
    long long int x;
    long long int *T;
}Tree;
int main()
{
    long long int t;
    scanf("%lld",&t);
    Tree Tab[t];

    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&Tab[i].n,&Tab[i].x);
        Tab[i].T=malloc(sizeof(long long int)*Tab[i].n);
        for(int j=0;j<Tab[i].n;j++)
            scanf("%lld",&Tab[i].T[j]);
    }

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<Tab[i].n;j++)
        {
            if(Tab[i].T[j]>=Tab[i].x)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
}

