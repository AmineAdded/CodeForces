#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,ans=0;
    cin>>n>>k;
    if( k >= 3 * n) cout<<0<<endl;
    else cout<<3*n-k<<endl;

}