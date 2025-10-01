#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,l=0,r=0,T[1001],j;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        T[i]=a;
        if(a!=i)
        {
            r=max(r,a);
            if(l==0)
                l=i;
        }
    }
    for(int i=l,j=r;i<=r;i++,j--)
    {
        
        if(T[i]!=j)
        {
            cout<<0<<" "<<0;
            return 0;
        }
    }
    cout<<l<<" "<<r;
   
}
