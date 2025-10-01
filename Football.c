#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *team1,*team2,*ch;
    team1=malloc(sizeof(char)*11);
    team2=malloc(sizeof(char)*11);
    ch=malloc(sizeof(char)*11);
    int n,score1=0,score2=0;
    scanf("%d",&n);
    scanf("%s",team1);
    for(int i=1;i<n;i++)
    {
        scanf("%s",ch);
        if(strcmp(ch,team1)==0)
            score1++;
        else
        {
            score2++;
            strcpy(team2,ch);
        }
    }
    if(score1>=score2)
        printf("%s",team1);
    else
        printf("%s",team2);
    free(team1);
    free(team2);
    free(ch);
}
