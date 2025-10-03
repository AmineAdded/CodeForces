#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(k>n){
        cout<<-1<<endl;
        return 0;
    }
    else{
        sort(v.begin(),v.end());
        cout<<v[n-k]<<" "<<0;
    }
}