#include<bits/stdc++.h>
using namespace std;
int main()
{
    string email,ans;
    int pos=0;
    cin>>email;
    while(email.length()!=0)
    {
        int posAt=email.find("at");
        int posDot=email.find("dot");
        if((ans.find("@")==-1 && posAt!=0 && posAt!=email.length()-2) )
        {
            ans+=email.substr(pos,posAt)+"@";
            email.erase(pos,posAt+2);
        }
        else if( posDot!=0 && posDot!=email.length()-3)
        {
            ans+=email.substr(pos,posDot)+'.';
            email.erase(pos,posDot+3);
            cout<<posDot<<endl;
            
        }
        else
        {
            ans+=email.substr(pos,email.length()-pos);
            cout<<ans<<endl;
            return 0;
        }
    }
    return 0;
}
