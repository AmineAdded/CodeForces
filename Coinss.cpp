#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i;
    cin>>n;
    i=n/2;
    while(n!=1)
    {
        if(n%i==0)
        {
            cout<<n<<" ";
            n=i;
            i=n/2;
        }
        else
            i--;
    }
    cout<<1<<endl; 
}