
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    vector<ll>answers(n);
    for(ll i=0;i<n;i++)
    {
        cin>>answers[i];
    }
    ll sum=answers[0];
    for(ll i=1;i<n;i++)
    {
      sum+=answers[i]+(i*(answers[i]-1));
    }
    cout<<sum;
}
