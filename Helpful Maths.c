#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char *ch,temp;
    ch=(char*)malloc(sizeof(char)*100);
    scanf("%s",ch);
    if(strlen(ch)>1)
    {
        for(int i=0;i<=strlen(ch)-2;i=i+2)
        {
            for(int j=i+2;j<strlen(ch);j=j+2)
            {
                 if(ch[i]>ch[j])
                {
                    temp=ch[i];
                    ch[i]=ch[j];
                    ch[j]=temp;
                }
            }
        }
    }
    printf("%s",ch);
    free(ch);
    return 0;
}
