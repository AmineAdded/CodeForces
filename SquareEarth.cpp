#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x1,y1,x2,y2,Dx,Dy;
    cin>>n>>x1>>y1>>x2>>y2;
    Dx=abs(x1-x2);
    Dy=abs(y1-y2);
    if(Dx==n || Dy==n)
    {x1+=y1+x2+y2;}
    else
    {x1=Dx+Dy;}
    //4*n-x1: pour le deuxieme sens
    cout<<min(4*n-x1,x1)<<endl;    
}