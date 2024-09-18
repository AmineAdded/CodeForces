#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,number,j=0,c=0;
    int Pair[100],Impair[100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>number;
        if(number%2==0)
            Pair[j++]=i;
        else
            Impair[c++]=i;
    }
    if(j>c)
        cout<<Impair[0]<<endl;
    else
        cout<<Pair[0]<<endl;
}