#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    char handle[21];
    int p,m,a,b,c,d,e;
}Contestant;
typedef struct
{
    char handle[21];
    int score;
}Player;
int main()
{
    int n;
    scanf("%d",&n);
    Contestant *T=malloc(sizeof(Contestant)*n);
    Player *T1=malloc(sizeof(Player)*n);
    for(int i=0;i<n;i++)
        scanf("%s %d %d %d %d %d %d %d",T[i].handle,&T[i].p,&T[i].m,&T[i].a,&T[i].b,&T[i].c,&T[i].d,&T[i].e);
    for(int i=0;i<n;i++)
    {
        T1[i].score=T[i].a+T[i].b+T[i].c+T[i].d+T[i].e+(100*T[i].p)-(50*T[i].m);
        strcpy( T1[i].handle,T[i].handle);
    }
    int max=T1[0].score,indice;
    for(int i=0;i<n;i++)
    {
        if(T1[i].score>=max)
        {
            max=T1[i].score;
            indice=i;
        }
    }
    char winner[21];
    strcpy(winner,T1[indice].handle);
    printf("%s",winner);
    free(T);
    return 0;
}
