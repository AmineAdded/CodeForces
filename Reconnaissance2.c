#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void solve(int *heigh,int n)
{
    int min,ind1,ind2;
    min=llabs(heigh[0]-heigh[n-1]);
    ind1=0;
    ind2=n-1;
    for(int i=0;i<n;i++)
    {
        if((llabs(heigh[i]-heigh[i+1])) <= min)
        {
            min=llabs(heigh[i]-heigh[i+1]);
            ind1=i;
            ind2=i+1;
        }
    }
    printf("%d %d",ind1+1,ind2+1);

}
int main()
{
    int n;
    scanf("%d",&n);
    int *heigh=malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&heigh[i]);
    solve(heigh,n);
    free(heigh);
    return 0;
}
