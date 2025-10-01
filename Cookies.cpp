#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pair=0,impair=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)pair++;
        else impair++;
    }
    if(impair%2==0) cout<<pair<<endl;
    else cout<<impair<<endl;
}