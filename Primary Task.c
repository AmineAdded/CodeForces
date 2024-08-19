#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void solve()
{
    int n,puiss;
    scanf("%d",&n);
    char *ch1=malloc(sizeof(char)*12);
    sprintf(ch1,"%d",n);
    if(strncmp(ch1,"10",2)==0 && (ch1[2]!='0'))
    {
        puiss=atoi(ch1+2);
        if(puiss>=2)
        {
            printf("YES\n");
            return ;
        }
        else
        {
            printf("NO\n");
            return ;
        }
    }
    else
        printf("NO\n");
    free(ch1);
    return ;

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
    return 0;
}
