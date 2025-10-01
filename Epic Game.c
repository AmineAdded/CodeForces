#include<stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve(int a,int b,int n)
{
   int valid=1;
   while(valid)
   {
      valid=0;
      if(gcd(a,n)<=n)
      {
          valid=1;
          n-=gcd(a,n);
      }
      else
      {
          printf("1");
          return ;
      }
      if(gcd(b,n)<=n)
      {
          valid=1;
          n-=gcd(b,n);
      }
      else
      {
          printf("0");
          return ;
      }
   }
}
int main()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    solve(a,b,n);
    return 0;
}
