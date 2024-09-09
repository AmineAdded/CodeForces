#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s;
    while(n%7!=0)
    {
        s+='4';
        n-=4;
    }
    if(n<0)
    {cout<<-1; return 0;}
    long long count=n/7;
    while(count--)
    {
        s+='7';
    }
    cout<<s;

}