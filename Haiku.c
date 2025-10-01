#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int countVowel(char *s)
{
    int count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='u' || s[i]=='i' || s[i]=='o' || s[i]=='e')
            count++;
    }
    return count;
}
int main()
{
    char *s=malloc(sizeof(char)*101);
    int *T=malloc(sizeof(int)*3);
    for(int i=0;i<3;i++)
    {
        gets(s);
        T[i]=countVowel(s);

    }
    if(T[0]==5 && T[1]==7 && T[2]==5)
        printf("YES");
    else
        printf("NO");
    free(T);
    free(s);
    return 0;
}
