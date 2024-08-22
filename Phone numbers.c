#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void solve(char *ch,int n)
{
    char *s=malloc(sizeof(char)*1000);
    int a=0,i=0;
    if(n%3==0)
    {
        int length=n+(n/3)-1;
        while(a<length)
        {
            int count=3;
            while(count--)
                s[a++]=ch[i++];
            if(a<length-1)
                s[a++]='-';
        }
        s[a]='\0';
        printf("%s",s);
        return ;
    }
    else if(n%3==1)
    {
        int length=n+n/3;
        int digit3=((n/3)-1);
        int digit2=(n-digit3*3)/2;
        while(a<length)
        {
            while(digit3--)
            {
                int count =3;
                while(count--)
                {
                    s[a++]=ch[i++];
                }
                if(a<length-1)
                    s[a++]='-';
            }
            while(digit2--)
            {
                int count =2;
                while(count--)
                {
                    s[a++]=ch[i++];
                }
                if(a<length-1)
                    s[a++]='-';
            }
        }
         s[a]='\0';
        printf("%s",s);
        return ;
    }
    else if(n%3==2)
    {
        int digit3=(n/3);
        int digit2=(n-digit3*3)/2;
        int length=n+(digit2+digit3);
        while(a<length)
        {
            while(digit3--)
            {
                int count=3;
                while(count--)
                    s[a++]=ch[i++];
                if(a<length-1)
                    s[a++]='-';
            }
            while(digit2--)
            {
                int count =2;
                while(count--)
                {
                    s[a++]=ch[i++];
                }
                if(a<length-1)
                    s[a++]='-';
            }
            s[a]='\0';
            printf("%s",s);
            return ;
        }
    }
    free(s);
}
int main()
{
    int n;
    scanf("%d",&n);
    char *ch=malloc(sizeof(char)*(n+1));
    scanf("%s",ch);
    if(n==2 || n==3)
    {
        printf("%s",ch);
        return 0;
    }
    solve(ch,n);
    free(ch);
    return 0;
}
