#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i;
    cin>>n;
    i=n/2;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    while(n!=1)
    {
        if(n%i==0)
        {
            cout<<n<<" ";
            n=i;
            i=n/2;
        }
        else
        {
            i--;
        }
        if(n==1)
        {
            cout<<1<<endl;
        }
    }
}