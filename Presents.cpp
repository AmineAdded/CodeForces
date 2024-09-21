#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c,a,ans=0,T[366]={0},pos=0,j=0;
    cin>>n>>k>>c;
    for(int i=0;i<c;i++)
    {
        cin>>a;
        T[i]=a;
       
    }
   
    while(pos<n)
    {
        if(j<c)
        {
            if(pos>=T[j])
            {
                j++;
            }
            else
            {
                pos=min(pos+k,T[j]);
                ans++;
            }
        }
        else
        {
            pos+=k;
            if(pos<=n)
                ans++;
        }
    }

     
    cout<<ans<<endl;
}