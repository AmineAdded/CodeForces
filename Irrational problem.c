#include<stdio.h>
int main()
{
    int p1,p2,p3,p4,a,b;
    scanf("%d %d %d %d %d %d",&p1,&p2,&p3,&p4,&a,&b);
    int count=0;
    for(int i=a;i<=b;i++)
    {
        int x=i;
        int f=(((x%p1)%p2)%p3)%p4;
        if(f==x)
            count++;
    }
    printf("%d",count);
}
