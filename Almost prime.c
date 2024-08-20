#include<stdio.h>
int prime(int x)
{
    if(x<=1)
        return 0;
    for(int i=2;i<=(x/2);i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;

}
int almost_Prime(int x)
{
    int count=0;
    if(prime(x))
        return 0;
    for(int i=1;i<=x/2;i++)
    {
        if(x%i==0 && prime(i))
            count++;
    }
    if(count==2)
        return 1;
    return 0;

}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(almost_Prime(i))
            count++;
    }
    printf("%d\n",count);
}
