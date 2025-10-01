#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void triChaine(char *ch)
{
    char temp;
    for(long long int i=0;i<strlen(ch)-1;i++)
    {
        for(long long int j=i+1;j<strlen(ch);j++)
        {
            if(ch[i]>=ch[j])
            {
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
    }
}
void solve(char *ch,char *m)
{
    char s[strlen(ch)+1];
    int a=0,j=0,valid=0;
    if(ch[0]=='0')
    {
        valid=1;
        while(ch[j]=='0')
            j++;
        s[a++]=ch[j];
    }
    for(int i=0;i<strlen(ch);i++)
    {
        if(valid)
        {
            if(i!=j)
                s[a++]=ch[i];
        }
        else
            s[a++]=ch[i];

    }
    s[a]='\0';
    if(strcmp(s,m)==0)
        printf("OK");
    else
        printf("WRONG_ANSWER");
}
int main()
{
    long long int n;
    char m[12];
    scanf("%lld",&n);
    scanf("%s",m);
    if (n == 0) {
        if (strcmp(m, "0") == 0)
            printf("OK");
        else
            printf("WRONG_ANSWER");
        return 0;
    }
    char ch[11];
    sprintf(ch,"%lld",n);
    triChaine(ch);
    solve(ch,m);
    return 0;

}
