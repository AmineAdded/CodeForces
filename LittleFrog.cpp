#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,count=0,pos=1,l=1,r;
    cin>>n;
    r=n;
    while(count!=n)
    {
         if(r==l)
        {
            cout<<r<<" ";
            return 0;
        }
        pos=l;
        l++;
        count++;
        cout<<pos<<" ";
        pos=r;
        r--;
        count++;
        cout<<pos<<" ";
    }
}