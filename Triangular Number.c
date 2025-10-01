#include<stdio.h>
int main()
{
    int n,valid=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if((i*(i+1))/2==n)
        {
            valid=1;
            break;
        }
    }
    if(valid)
        printf("YES");
    else
        printf("NO");
    return 0;
}

