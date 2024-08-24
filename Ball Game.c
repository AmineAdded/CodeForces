#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    int *T=malloc(sizeof(int)*n);
    T[0]=2;
    for(int i=1;i<n-1;i++)
    {
        int S=T[a-1]+i+1;
        if(S==n || S%n==0)
            T[a++]=n;
        else if(S>n)
            T[a++]=S%n;
        else
            T[a++]=S;
    }
    for(int i=0;i<n-1;i++)
        printf("%d ",T[i]);
    free(T);
    return 0;
}
