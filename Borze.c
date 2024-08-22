#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void solve(char *ch)
{
    char s[200];
    int i=0,a=0;
    while(i<strlen(ch))
    {
        if(ch[i]=='.')
        {
              s[a]='0';
              i++;
        }
        else if(ch[i]=='-' && ch[i+1]=='.')
        {
            s[a]='1';
            i+=2;
        }
        else if(ch[i]=='-' && ch[i+1]=='-')
        {
            s[a]='2';
            i+=2;
        }
        a++;
    }
    s[a]='\0';
    printf("%s",s);
}
int main()
{
    char ch[201];
    scanf("%s",ch);
    solve(ch);
    free(ch);
    return 0;
}
