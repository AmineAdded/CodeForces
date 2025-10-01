#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a;
    cin>>n;
    vector<int>V;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        V.push_back(a);
    }
    for(int l=0;l<n;l++)
    {
        for(int m=0;m<n;m++)
        {
            if(m==l)
                continue;
            for(int g=0;g<n;g++)
            {
                if(g==l || g==m)
                    continue;
                if(V[m]+V[g]==V[l])
                {
                    i=l+1,j=g+1,k=m+1;
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return 0; 
                }
            }
        }
    }
   cout<<-1<<endl;
}