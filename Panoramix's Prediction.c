#include<stdio.h>
#include<math.h>
int prime(int x) {
    if (x <= 1) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}
int nextPrime(int n,int m)
{
    for(int i=n+1;i<=m;i++)
    {
        if(prime(i))
            return i;
    }
    return 0;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int x=nextPrime(n,m);
    if(x==m)
        printf("YES");
    else
        printf("NO");
    return 0;
}
