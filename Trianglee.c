#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    int x;
    int y;
    int z;
}length;
length max(int x,int y,int z)
{
    length l;
   int temp;

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    l.x=x;
    l.y=y;
    l.z=z;
    return l;

}
int main()
{
    int a,b,c,d;
    length l;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a+b>c && a+c>b && b+c>a) || (a+b>d && a+d>b && b+d>a) || (a+c>d && a+d>c && c+d>a) || (b+c>d && b+d>c && c+d>b))
        printf("TRIANGLE");
    else
    {
        l=max(a,b,c);
         if(l.x+l.y==l.z)
            printf("SEGMENT");
        else
        {
            l=max(a,b,d);
            if(l.x+l.y==l.z)
                 {
                     printf("SEGMENT");
                 }
            else
            {
                 l=max(a,c,d);
                 if(l.x+l.y==l.z)
                 {
                     printf("SEGMENT");
                 }
                else
                {
                    l= max(b,c,d);
                    if(l.x+l.y==l.z)
                        printf("SEGMENT");
                    else
                        printf("IMPOSSIBLE");
                }
            }

        }

    }
}
