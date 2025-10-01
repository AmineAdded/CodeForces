#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int luckyNumber(int n)
{
    char s[200];
    sprintf(s,"%d",n);
    int i=0;
    while(s[i]=='4' || s[i]=='7')
        i++;
    if(i>=strlen(s))
        return 1;
    return 0;
}
void solve(long long int n)
{
    int digit,count=0;
    while(n!=0)
    {
        digit=n%10;
        n/=10;
        if(digit==4 || digit==7)
           count++;
    }
    if(luckyNumber(count))
        printf("YES");
    else
        printf("NO");
}
int main()
{
    long long int n;
    scanf("%I64d",&n);
    solve(n);
    return 0;
}
