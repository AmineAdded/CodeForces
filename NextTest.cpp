#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>V;
    int index,ans;
    for(int i=0;i<n;i++)
    {
        cin>>index;
        V.push_back(index);
    }
    sort(V.begin(),V.end());
    if(V[0]>1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(V[i]+1<V[i+1] || i==n-1)
        {
            cout<<V[i]+1<<endl;
            return 0;
        }
    } 
}