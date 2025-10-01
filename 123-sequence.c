#include<stdio.h>
#include<stdlib.h>
long long int max(long long int occ1,long long int occ2,long long int occ3)
{
    if(occ1>=occ2 && occ1>=occ3)
        return occ1;
    if(occ2>=occ1 && occ2>=occ3)
        return occ2;
    return occ3;
}
int main()
{
    long long int n,occ1=0,occ2=0,occ3=0;
    scanf("%lld",&n);
    int a;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
            occ1++;
        else if(a==2)
            occ2++;
        else
            occ3++;
    }
    printf("%lld",n-max(occ1,occ2,occ3));
}
