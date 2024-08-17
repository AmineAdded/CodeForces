#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int t,n,k,x,*vote,m,*vote2;
    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lld",&n);
       //calloc: initialiser le tableau à zero
       vote = calloc(n+1, sizeof(long long int));
       for(long long int i=0;i<n;i++)
       {
            scanf("%lld",&k);
            for(long long int j=0;j<k;j++)
            {
                scanf("%lld",&x);
                vote[x]++;
            }
        }

        long long int *vote2 = malloc(n * sizeof(long long int));
        m=0;
        for(long long int i=1;i<=n;i++)
        {
            if(vote[i]*2>n)
                vote2[m++]=i;
        }

        printf("%lld\n",m);
        for(long long int i=0;i<m;i++)
            printf("%lld ",vote2[i]);
        printf("\n");

        free(vote);
        free(vote2);
    }
}
