#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,distance;
    cin>>x>>y;
    distance=sqrt((x*x)+(y*y));
    if(fmod(distance,1.0)==0.0)
    {
        cout<<"black"<<endl;
        return 0;
    }
    int partie_entiere=trunc(distance);
    if((x>=0 && y>=0) || (x<0 && y<0))
    {
        if(partie_entiere%2==0)
        {
            cout<<"black"<<endl;
            return 0;
        }
        else
        {
            cout<<"white"<<endl;
             return 0;
        }
    }
    else
    {
        if(partie_entiere%2==0)
        {
            cout<<"white"<<endl;
            return 0;
        }
        else
        {
            cout<<"black"<<endl;
             return 0;
        }
    }
    
}