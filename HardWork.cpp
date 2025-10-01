#include<bits/stdc++.h>
using namespace std;
void IgnoreSign(string &s)
{
    for(int i=0;i<s.length();i++)
    {
        if(!(isalpha(s[i])))
        {
            s.erase(i,1);
            i--;
        }
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
    }
}
int main()
{
    string s,s1,s2,s3;
    int n,valid;
    cin>>s1>>s2>>s3;
    IgnoreSign(s1);
    IgnoreSign(s2);
    IgnoreSign(s3);
    vector<string>V={s1+s2+s3,s1+s3+s2,s2+s1+s3,s2+s3+s1,s3+s1+s2,s3+s2+s1};
    cin>>n;
    while(n--)
    {
        valid=0;
        cin>>s;
        IgnoreSign(s);
        for(int i=0;i<6;i++)
        {
            if(V[i]==s)
            {
                valid=1;
                break;
            }
        }
        if(valid)
            cout<<"ACC"<<endl;
        else
            cout<<"WA"<<endl;
    }
    return 0;
}
