#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n>>t>>s;
    while(t--){
        char temp;
        for(int i=0;i<n;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i+=1;
            }
        }
    }
    cout<<s<<endl;
}