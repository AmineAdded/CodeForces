#include<stdio.h>
#include<stdlib.h>
void solve()
{
    int n,*a;
    scanf("%d",&n);
    a=malloc(sizeof(int)*n);
    int max=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2!=0 && a[i]>=max)
            max=a[i];
    }
    printf("%d\n",max);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
