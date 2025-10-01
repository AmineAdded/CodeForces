#include<bits/stdc++.h>
using namespace std;
int main(){
    int pos=1,sLength,tLength;
    string s,t;
    cin>>s>>t;
    sLength=s.length();
    tLength=t.length();
    int i=0,j=0;
    while(tLength--){
        if(s[i]==t[j]){
            i++;
            j++;
            pos++;
        }
        else{
            j++;
        }
    }
    cout<<pos<<endl;
}