#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }
    cout<<ans<<endl;
}