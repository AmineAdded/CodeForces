#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char a=s[0];
    for(int i=1;i<s.size();i++){
        if(s[i]>a){
            a=s[i];
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==a){
            cout<<s[i];
        }
    }
}