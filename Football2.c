#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s=malloc(sizeof(char)*101);
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
       if(s[i]==s[i+1])
       {
        int j=i+1;
        int count=2;
        while(s[j]==s[j+1])
        {
            count++;
            j++;
        }
        if(count>=7)
        {
            printf("YES");
            return 0;
        }
       }
    }
    printf("NO");
    free(s);
    return 0;
}
