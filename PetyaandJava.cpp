#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long x;
    cin>>x;
    string list[5]={"byte","short","int","long","BigInteger"};
    if(x<=127)
        cout<<list[0];
    else if(x<=32767)
        cout<<list[1];
    else if(x<=2147483647)
        cout<<list[2];
    else if(x<=9223372036854775807)
        cout<<list[3];
    else
        cout<<list[4];
}