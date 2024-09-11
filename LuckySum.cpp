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
    while(l<=r)
    {
        if(l<=q.front())
        {
            ans+=q.front();
            l++;
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
