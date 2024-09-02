#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int T[2000];
    for(int i=0;i<n;i++)
        scanf("%d",&T[i]);
    int t,a=0,c;
    for(int i=0;i<n;i++)
    {
      t=i;
      c=1;
      while(T[t]!=-1)
      {
          t=T[t]-1;
          c++;
      }
      if(c>=a)
        a=c;
    }
    printf("%d",a);
}
