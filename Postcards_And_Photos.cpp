#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    int count=1;
    for(int i=0;i<s.length()-1;i++){
        
        if(s[i]==s[i+1] && count<5) count++;
        else{
            count=1;
            ans++;
        }
    }
    cout<<ans+1<<endl;

}