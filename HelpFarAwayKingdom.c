#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch[1001],s[1001];
    scanf("%s",ch);
    int pos=strchr(ch,'.')-ch;
    strncpy(s,ch,pos);
    s[pos]='\0';
    if(ch[pos-1] < '9')
    {
        if(ch[pos+1]>= '5')
        {
            s[pos-1]++;
             printf("%s",s);
        }
        else
        {
            printf("%s",s);
        }
    }
    else
        printf("GOTO Vasilisa.");
}