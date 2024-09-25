#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b,max=0,passengers=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        passengers+=b-a;
        if(passengers>=max)
            max=passengers;
    }
    printf("%d",max);
}
