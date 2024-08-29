#include<stdio.h>
#include<stdlib.h>
int max(int *T1,int n)
{
    int max1=T1[0];
    for(int i=1;i<n;i++)
    {
        if(T1[i]>=max1)
            max1=T1[i];
    }
    return max1;
}
void solve(int *T,int n)
{
    int *T1=malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        int count=1,left=i,prevLeft=i-1,right=i,nextRight=i+1;
        while(T[left]>=T[prevLeft] && left>0)
        {
            left=prevLeft;
            prevLeft--;
            count++;
        }

        while(T[right]>=T[nextRight] && right<n-1)
        {
            right=nextRight;
            nextRight++;
            count++;
        }

        T1[i]=count;
    }
    printf("%d",max(T1,n));
    free(T1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int *T=malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&T[i]);
    solve(T,n);
    free(T);
    return 0;
}
