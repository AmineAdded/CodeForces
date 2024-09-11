#include<bits/stdc++.h>
using namespace std;
# define ll long long

int main()
{
    ll l,r,ans=0;
    cin>>l>>r;
    queue<ll>q;
    q.push(4);
	q.push(7);
    for(ll i=l;i<=r;)
    {
        if(i<=q.front())
        {
            ans+=q.front();
            i++;
        }
        else
        {
            q.push(q.front()*10+4);
            q.push(q.front()*10+7);
            q.pop();
        }
    }
    cout<<ans;

}