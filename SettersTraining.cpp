#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[101],ans=0;
    cin>>n>>k;
    n++;
    for(int i=1;i<n;i++)
        cin>>a[i];
    a[n]=k;
    while(a[1]!=k)
    {
        ans++;
        for(int i=1;i<n;i++)
        {
            if(a[i+1]-a[i])
                a[i]++;
        }
    }
    cout<<ans;

}