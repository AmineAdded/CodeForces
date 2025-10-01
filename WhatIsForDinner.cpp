#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m,k,r;
    ll c,ans=0,T[1001];

    // Initialisation de T avec une valeur très élevée
    fill(T, T + 1001, LLONG_MAX);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>r>>c;
        T[r]=min(T[r],c);
    }
    ll row=1;
   while(ans<=k && row<=m)
   {
        if(ans+T[row]>k)
        {
            ans+=k-ans;
            break;
        }
        ans+=T[row];
        row++;
   }
    cout<<ans<<endl;
    
}