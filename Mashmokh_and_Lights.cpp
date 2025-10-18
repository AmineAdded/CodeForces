#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> button(k);
    for(int i=0;i<k;i++) cin>>button[i];

    map<int,int> m;
    for(int i=1;i<=n;i++) m[i]=0;
    for(int i=0;i<k;i++){
        int temp=button[i];
        if(m[temp]==0) m[temp]=button[i];;
        
        while(temp!=n && m[temp+1]==0){
            m[temp+1]=button[i];
            temp++;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<m[i]<<" ";
    }
 }