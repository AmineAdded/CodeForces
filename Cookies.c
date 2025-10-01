#include<stdio.h>
typedef struct
{
    long long int n;
    long long int m;
    long long int a;
}Cookie;
int main()
{
    long long int T;
    scanf("%lld",&T);

    Cookie Tab[T];
    for(int i=0;i<T;i++)
        scanf("%lld %lld %lld",&Tab[i].n,&Tab[i].m,&Tab[i].a);

    for(int i=0;i<T;i++)
    {
      long long int possibleEat=Tab[i].n-Tab[i].m;
      if(Tab[i].n==Tab[i].m)
        printf("0\n");
      else if(possibleEat>=Tab[i].a)
        printf("%lld\n",Tab[i].a);
      else
          printf("%lld\n",possibleEat);
    }
}
