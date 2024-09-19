#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,T[100];
    cin>>n;
    vector<int>V;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        V.push_back(a);
    }
    int ans=0,count=1;
    for(int i=0;i<n;i++)
    {
        if(V[i]==count)
        {
            T[ans++]=2001+i;
            count++;
        }
    }
    if(ans==0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<ans<<endl;
    for(int i=0;i<ans;i++)
    {
        cout<<T[i]<<" ";
    }


}