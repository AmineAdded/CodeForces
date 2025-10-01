#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ans=0,appartments=1,amount=0;
    cin>>a>>b>>c;
    c-=1;
    while(c--){
        while(amount<a){
            ans++;
            amount+=b*appartments;
        }
        amount-=a;
        appartments++;
    }
    cout<<ans<<endl;
}