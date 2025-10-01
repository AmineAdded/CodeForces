#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    for(int i=0;i<s1.length();i++)
    {
        if(tolower(s1[i]) == 'o' || tolower(s1[i]) == 'a' || tolower(s1[i]) == 'i' || 
           tolower(s1[i]) == 'u' || tolower(s1[i]) == 'e' || tolower(s1[i]) == 'y')
        {
             s1.erase(i, 1);
             i--;
        }
        else
        {
            s1.insert(i,1,'.');
            i++;
        }
         if(isupper(s1[i]))
            s1[i] = tolower(s1[i]);
        
    }
    cout<<s1;
}   