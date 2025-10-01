#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,k;
    cin>>a>>b>>c;
    if(c==0){
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;
    }
    else if(((b-a)%c) !=0 || ((b-a)/c)<0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}