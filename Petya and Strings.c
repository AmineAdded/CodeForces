#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void solve(char *s1,char *s2)
{
    int i=0;
    while(i<strlen(s1) && tolower(s1[i])==tolower(s2[i]))
        i++;
    if(i>=strlen(s1))
        printf("0");
    else
    {
        if(tolower(s1[i])<tolower(s2[i]))
            printf("-1");
        else
            printf("1");
    }
}
int main()
{
   char *s1=malloc(sizeof(char)*101);
   char *s2=malloc(sizeof(char)*101);
   scanf("%s %s",s1,s2);
   solve(s1,s2);
   free(s1);
   free(s2);
   return 0;
}
