#include<stdio.h>
int main()
{
    int x1,y1,z1,x2,y2,z2;
    scanf("%d %d %d",&x1,&y1,&z1);
    scanf("%d %d %d",&x2,&y2,&z2);
    if(x1!=x2 && y1!=y2 && z1!=z2)
        printf("NO");
    else
        printf("YES");
    return 0;
}
