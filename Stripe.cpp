#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,sum=0;
    cin>>n;
    map <int,int> M;
    for(ll i=0;i<n;i++)
    {
        cin>>M[i];
        sum+=M[i];
    }
    ll sum1=0,ans=0;
   for(int i=0;i<n-1;i++)
   {
        sum1+=M[i];
        sum-=M[i];
        if(sum1==sum)
            ans++;
   }
    cout<<ans<<endl;
}