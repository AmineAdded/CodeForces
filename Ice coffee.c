#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    long long int n;
    long long int *A;
    long long int *B;
}Coffee;
int premier (long long int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (long long int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}
long long int next(long long int x)
{
    if(premier(x))
        return 1;
    if(x%2==0)
        return (x/2);
    else
    {
        for (int i = 3; i <= x / 2; i += 2)
        {
        if (x % i == 0)
            return i;
        }
    }

}
int main()
{
    printf("%d",next(15));
    long long int t;
    Coffee *T;
    scanf("%lld",&t);
    T=malloc(sizeof(Coffee)*t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&T[i].n);
        T[i].A=malloc(sizeof(long long int)*T[i].n);
        T[i].B=malloc(sizeof(long long int)*T[i].n);
        for(int j=0;j<T[i].n;j++)
            scanf("%lld",&T[i].A[j]);
        for(int j=0;j<T[i].n;j++)
            scanf("%lld",&T[i].B[j]);
    }

      for(int i=0;i<t;i++)
      {
          long long int total=0;
          for(int j=0;j<T[i].n;j++)
          {
              if(T[i].A[j]!=T[i].B[j])
              {
                  long long int nb=0;
                  while(T[i].A[j]!=T[i].B[j])
                  {
                      if(T[i].A[j]>T[i].B[j])
                        T[i].A[j]=next(T[i].A[j]);
                     else
                         T[i].B[j]=next(T[i].B[j]);
                    nb++;
                  }
                  total+=nb;
              }
          }
          printf("%lld\n",total);
          free(T[i].A);
          free(T[i].B);
      }

     free(T);
}
