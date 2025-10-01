#include<stdio.h>
long long int solve(long long int n,long long int k)
{
    return ((n-1)*k +1);
}
int main()
{
    long long int t,n,k;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        printf("%lld\n",solve(n,k));
    }
}
