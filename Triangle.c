#include<stdio.h>
#include<stdlib.h>
int distance(int a,int b,int c,int d)
{
    return ((c-a)*(c-a))+((d-b)*(d-b));
}
int Right(int x1,int y1,int x2,int y2,int x3,int y3)
{
    int dist1,dist2,dist3;
    dist1=distance(x1,y1,x2,y2);
    dist2=distance(x1,y1,x3,y3);
    dist3=distance(x2,y2,x3,y3);
    if((x1==x2 && y1==y2) || (x1==x3 && y1==y3) || (x2==x3 && y2==y3))
        return 0;// triangle degénéré
    if(dist1+dist2==dist3 || dist1+dist3==dist2 || dist2+dist3==dist1)
        return 1;//triangle rectangle
    return 0;//Neither
}
int main()
{
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    if(Right(x1,y1,x2,y2,x3,y3))
        printf("RIGHT");
    else
    {
        if(Right(x1+1,y1,x2,y2,x3,y3) || Right(x1-1,y1,x2,y2,x3,y3) || Right(x1,y1+1,x2,y2,x3,y3) || Right(x1,y1-1,x2,y2,x3,y3)
           || Right(x1,y1,x2+1,y2,x3,y3) || Right(x1,y1,x2-1,y2,x3,y3) || Right(x1,y1,x2,y2+1,x3,y3) || Right(x1,y1,x2,y2-1,x3,y3)
           ||Right(x1,y1,x2,y2,x3+1,y3) || Right(x1,y1,x2,y2,x3-1,y3) || Right(x1,y1,x2,y2,x3,y3+1) || Right(x1,y1,x2,y2,x3,y3-1))
             printf("ALMOST");
        else
            printf("NEITHER");
    }
    return 0;
}
