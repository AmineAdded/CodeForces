#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,l,temp;
    cin>>k>>l;
    temp=k;
    long long i=0;
    while(temp<l)
    {
        i++;
        temp *= k;
    }
    if(temp==l)
    {
        cout<<"YES"<<endl;
        cout<<i;
    }
    else
        cout<<"NO";
}