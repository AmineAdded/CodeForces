#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s=malloc(sizeof(char)*101);
    scanf("%s",s);
    char word[5]={'h','e','l','l','o'};
    int j=0;
    char *ch=malloc(sizeof(char)*101);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==word[j])
        {
           ch[j++]=s[i];
        }
        ch[j]='\0';
    }
    if(strcmp("hello",ch)==0)
        printf("YES");
    else
        printf("NO");
    free(s);
    free(ch);
    return 0;
}
