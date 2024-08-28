#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int estNumerique(char *ch)
{
    for(int i=0;i<strlen(ch);i++)
    {
        if(!isdigit(ch[i]))
            return 0;
    }
    return 1;
}
int found(char *ch,char liste[11][20])
{
    for(int i=0;i<11;i++)
    {
        if(strcmp(ch,liste[i])==0)
            return 1;
    }
    return 0;
}
int main()
{
    int n,number=0;
    scanf("%d",&n);
    char liste[11][20]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
    for(int i=0;i<n;i++)
    {
        char *ch=malloc(sizeof(char)*101);
        scanf("%s",ch);
        if(estNumerique(ch))
        {
            int x=atoi(ch);
            if(x<18)
                number++;
        }
        else
        {
            if(found(ch,liste))
                number++;
        }
    }
    printf("%d",number);
    return 0;
}
