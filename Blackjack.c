#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=10 || n>=22 && n<=25)
    {
          printf("0");
          return 0;
    }
    if(n==11 || n==21 || (n>=12 && n<=19))
    {
        printf("4");
        return 0;
    }
    if(n==20)
    {
        printf("15");
        return 0;
    }
}