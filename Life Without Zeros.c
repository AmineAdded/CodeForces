#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void deleteZeros(char *ch)
{
    int i = 0, j = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] != '0')
            ch[j++] = ch[i];
        i++;
    }
    ch[j] = '\0';
}
int valid(int a,int b,int c)
{
    char cha[100],chb[100],chc[100];
    sprintf(cha,"%d",a);
    sprintf(chb,"%d",b);
    sprintf(chc,"%d",c);

    deleteZeros(cha);
    deleteZeros(chb);
    deleteZeros(chc);

    a=atoi(cha);
    b=atoi(chb);
    c=atoi(chc);

    if(a+b==c)
        return 1;
    return 0;
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    if(valid(a,b,c))
        printf("YES");
    else
        printf("NO");
    return 0;
}
