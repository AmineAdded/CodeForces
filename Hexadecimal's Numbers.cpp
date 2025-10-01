#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    queue<long long>q;
    q.push(1);
    long long i=0,ans=0;
    while(i<n)
    {
        if(q.front()<=n)
        {
            i=q.front();
            ans++;
            q.push(q.front()*10);
            q.push(q.front()*10+1);
            q.pop();
        }
        else
            break;
    }
    cout<<ans<<endl;
    return 0;
}
