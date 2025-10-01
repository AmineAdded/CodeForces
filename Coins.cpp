#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a[3]={0};
    for(int i=0;i<3;i++)
    {
        cin>>s;
        if(s[1]=='>')
            a[s[0]-'A']++;
        else
            a[s[2]-'A']++;
    }
    if(a[0]==a[1] || a[0]==a[2] || a[1]==a[2])
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==a[j])
                cout<<char('A'+j);
        }
    }
}