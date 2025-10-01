#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double n;
    scanf("%lf",&n);
    for(int i=0;i<=n/2;i++)
    {
        if(pow(2,i)==n)
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}