#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,T[100],count=1,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==count)
        {
            T[ans++]=i+2001;
            count++;
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<ans;i++)
    {
        cout<<T[i]<<" ";
    }
}
