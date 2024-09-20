#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,ans=0,count=0;
    cin>>n>>m;
    vector<int>V;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        V.push_back(a);
    }
    sort(V.begin(),V.end());

    while(min(V[count],0)!=0 && count<m)
    {
        ans+=min(V[count++],0);
    }
    cout<<abs(ans)<<endl;
}