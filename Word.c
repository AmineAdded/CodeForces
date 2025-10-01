#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char *s=malloc(sizeof(char)*101);
    scanf("%s",s);
    int numberUp=0,numberLow=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
            numberUp++;
        else
            numberLow++;
    }
    if(numberUp<=numberLow)
    {
        for(int i=0;i<strlen(s);i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    else
    {
        for(int i=0;i<strlen(s);i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    printf("%s\n",s);
    return 0;
}
