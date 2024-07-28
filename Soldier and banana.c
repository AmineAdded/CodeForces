#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k,n,w,S=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++)
    {
        S+=k*i;
    }
    if(S>n)
        printf("%d",S-n);
    else
        printf("0");
}
