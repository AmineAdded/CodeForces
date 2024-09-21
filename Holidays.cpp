#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, T[101]={0};
    cin >> n >> m; 
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        for(int j=a;j<=b;j++)
        {
            T[j]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(T[i]!=1)
        {
            cout<<i<<" "<<T[i]<<endl;
            return 0;
        }
    }
    cout<<"OK"<<endl;
   
}
