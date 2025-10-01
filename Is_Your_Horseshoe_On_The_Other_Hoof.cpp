#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    vector<long long> v(4);
    for(int i=0;i<4;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        if(v[i]==v[i+1]) count++;
    }
    cout<<count<<endl;
}