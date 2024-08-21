#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    long long int d,*a;
    scanf("%d %lld",&n,&d);
    a=malloc(sizeof(long long int)*n);
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);

    if(n==1)
    {
        printf("0");
        return 0;
    }
    long long int count=0;
    for(int i=0;i<n-1;i++)
    {
        long long int count1=0;
        for(int j=i+1;j<n;j++)
        {
            if(llabs(a[j]-a[i])<=d)
            {
                count1++;
            }
        }
        count+=count1*2;
    }
    printf("%lld",count);
    free(a);
    return 0;
}
