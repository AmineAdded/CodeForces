#include<stdio.h>
int prime(int n) {
    if (n <= 1) return 0;  // 0 and 1 are not prime numbers
    if (n <= 3) return 1;  // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return 0;  // multiples of 2 and 3 are not prime

    // Check for factors from 5 to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}
int valid(int a,int b)
{
    for(int i=a+1;i<b;i++)
    {
        if(prime(i))
            return 0;
    }

    return 1;
}
int verif(int i)
{
           for(int j=2;j<i-1;j++)
           {
               for(int c=j+1;c<i;c++)
               {
                   if(prime(c)&&prime(j)&&((c+j)==(i-1))&&(valid(j,c)))
                       return 1;
               }
           }
        return 0;
}
int main()
{
    int n,k,a=0;
    scanf("%d %d",&n,&k);
    for(int i=3;i<=n;i++)
    {
        if(prime(i) && verif(i))
            a++;
    }
    //k est le nombre minimum des nombres vérifiant le probléme
      if (a >= k) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
