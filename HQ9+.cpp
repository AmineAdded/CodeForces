#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    cin>>p;
    int H=p.find('H');
    int Q=p.find('Q');
    int s=p.find('9');
    if(H!=-1 || Q!=-1 || s!=-1) cout<<"YES";
    else cout<<"NO";
}