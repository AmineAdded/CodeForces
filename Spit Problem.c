#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    long long int x;
    long long int d;
}Camel;
void solve(Camel *T,int n)
{
    int valid=0,i=0;
   while((i<n-1) && (valid==0))
   {
       for(int j=i+1;j<n;j++)
       {
           if((T[i].x+T[i].d==T[j].x) &&(T[j].x+T[j].d == T[i].x))
           {
               valid=1;
               break;
           }
       }
       i++;
   }
   if(valid)
        printf("YES");
   else
        printf("NO");
}
int main()
{
    int n;
    scanf("%d",&n);
    Camel *T=malloc(sizeof(Camel)*n);
    for(int i=0;i<n;i++)
        scanf("%lld %lld",&T[i].x,&T[i].d);
    solve(T,n);
    free(T);
    return 0;
}
