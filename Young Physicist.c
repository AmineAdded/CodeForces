#include<stdio.h>
int main()
{
    int n,x,y,z;
    scanf("%d",&n);
    int sumX=0,sumY=0,sumZ=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }
    if(sumX==0 && sumY==0 && sumZ==0)
        printf("YES");
    else
        printf("NO");
}
