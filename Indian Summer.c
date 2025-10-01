#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char *s1;
    char *s2;
}leave;

int main()
{
    int n;
    scanf("%d",&n);
    leave *T=malloc(sizeof(leave)*n);
    T[0].s1=malloc(sizeof(char)*11);
    T[0].s2=malloc(sizeof(char)*11);
    scanf("%s %s",T[0].s1,T[0].s2);
    int occ=1;
    for(int i=1;i<n;i++)
    {
        T[i].s1=malloc(sizeof(char)*11);
        T[i].s2=malloc(sizeof(char)*11);
        scanf("%s %s",T[i].s1,T[i].s2);
        int valid=0;
        for(int j=0;j<i;j++)
        {
            if(strcmp(T[i].s1,T[j].s1)==0 && strcmp(T[i].s2,T[j].s2)==0)
            {
                valid=1;
                break;
            }
        }
        if(!valid)
            occ++;
    }
    printf("%d\n",occ);
    for(int i=0;i<n;i++)
    {
        free(T[i].s1);
        free(T[i].s2);
    }
    free(T);
    return 0;
}
