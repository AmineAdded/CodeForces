#include<stdio.h>
#include<stdlib.h>
 int max(int occ1, int occ2,int occ3)
{
    if(occ1>=occ2 && occ1>=occ3)
        return occ1;
    if(occ2>=occ1 && occ2>=occ3)
        return occ2;
    return occ3;
}
int main()
{
    int r,g,b;
    scanf("%d %d %d",&r,&g,&b);
    int moment=0,Time1=0,Time2=0,Time3=0;
    int valid1=1,valid2=1,valid3=1;
    while(valid1 || valid2 || valid3)
    {
        if(r!=0 && moment%3==0)
        {
            if(r>=2)
                r-=2;
            else
                r--;
            Time1=moment+30;
            moment++;
        }
        else
        {
            moment++;
            valid1=0;
        }
        if(g!=0 && moment%3==1)
        {
            if(g>=2)
                g-=2;
            else
                g--;
            Time2=moment+30;
            moment++;
        }
        else
        {
            moment++;
            valid2=0;
        }
        if(b!=0 && moment%3==2)
        {
             if(b>=2)
                b-=2;
            else
                b--;
            Time3=moment+30;
            moment++;
        }
        else
        {
            moment++;
            valid3=0;
        }
    }
    printf("%d",max(Time1,Time2,Time3));
    return 0;
}
