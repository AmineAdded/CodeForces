#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<string>V;
    map<string,int>M;
    string name;
    for(int i=0;i<n;i++)
    {
        cin>>name;
        if(M[name]==0)
            cout<<"OK"<<endl;
        else
        {
            cout<<name<<M[name]<<endl;
        }
        M[name]++;
    }
   
}