#include<stdio.h>
#include<stdlib.h>
void solve(int *T,int n,int a,int b)
{
    int S=0;
    for(int i=a;i<b;i++)
        S+=T[i-1];
    printf("%d",S);
}
int main()
{
    int n,a,b;
    scanf("%d",&n);
    int *T=malloc(sizeof(int)*n);
    for(int i=0;i<n-1;i++)
        scanf("%d",&T[i]);
    scanf("%d %d",&a,&b);
    solve(T,n,a,b);
    free(T);
    return 0;
}
