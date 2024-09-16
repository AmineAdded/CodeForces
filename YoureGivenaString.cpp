#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
for(int l=s.size()-1;l>=0;--l)
for(int i=0;i<s.size()-l;++i)
if(s.rfind(s.substr(i,l))!=i)
{
cout<<l;
return 0;
}
cout<<0;
}
 