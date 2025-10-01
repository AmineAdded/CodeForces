#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *s1,*s2,*ch;
    s1=malloc(sizeof(char)*101);
    s2=malloc(sizeof(char)*101);
    ch=malloc(sizeof(char)*101);
    scanf("%s %s",s1,s2);
    int i=0;
    for(;i<strlen(s1);i++)
    {
        if(s1[i]=='1' && s2[i]=='1')
            ch[i]='0';
        else if(s1[i]=='0' && s2[i]=='0')
            ch[i]='0';
        else
            ch[i]='1';
    }
    ch[i]='\0';
    printf("%s",ch);
    free(s1);
    free(s2);
    free(ch);
    return 0;
}
